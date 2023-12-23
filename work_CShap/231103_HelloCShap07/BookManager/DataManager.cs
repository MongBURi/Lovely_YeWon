﻿using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace BookManager
{
    // 데이터만 관리하는 클래스
    public class DataManager
    {
        // 클래스 변수 :: 프로그램 시작하면 자동으로 생성됨 ex) new 어쩌구(); 이렇게 안 씀
        public static List<Book> books = new List<Book>();
        public static List<User> users = new List<User>();

        // 상수를 이용해서 태크에 넣을 문자열을 미리 만든다
        // 이유 :: 오타 방지
        const string ISBN = "isbn";
        const string NAME = "name";
        const string PUBLISHER = "publisher";
        const string PAGE = "page";
        const string USERID = "userid";
        const string USERNAME = "username";
        const string ISBORROWED = "isborrowed";
        const string BORROWEDAT = "borrowedat";
        const string ID = "id";

        // 정적 생성자
        // DataManager 클래스가 등장하는 그 순간에 바로 호출됨
        // 딱 한 번만 호출됨
        // new DataManager()가 호출되거나
        // Data
        static DataManager()
        {
            Load();
        }

        // 메소드
        public static void Load()
        {
            try
            {                
                string booksOutput = File.ReadAllText("./Books.xml");   // 단순 텍스트인데
                XElement bx = XElement.Parse(booksOutput);               // xml로서 인식하게 함
                books.Clear();
                foreach (var item in bx.Descendants("book") )
                {
                    Book book = new Book();
                    book.isbn = item.Element(ISBN).Value;
                    book.name = item.Element(NAME).Value;
                    book.publisher = item.Element(PUBLISHER).Value;
                    book.page = int.Parse(item.Element(PAGE).Value);
                    book.BorrowedAt = DateTime.Parse(item.Element(BORROWEDAT).Value);
                    book.isBorrowed = item.Element(ISBORROWED).Value != "0" ? true : false;
                    book.userId = item.Element(USERID).Value;
                    book.userName = item.Element(USERNAME).Value;
                    books.Add(book);
                }
                string usersOutput = File.ReadAllText("./Users.xml");
                XElement ux = XElement.Parse(usersOutput);
                users = (from item in ux.Descendants("user")
                    select new User()
                    {
                        Id = item.Element(ID).Value,
                        Name = item.Element(NAME).Value,
                    }).ToList<User>();
            }
            catch (Exception)
            {
                Save(); // 예외 상황 발생시 파일을 만들고
                Load(); // 다시 불러들인다.
                // 만약 파일이 이상하게 만들어지면 Load가 무한대로 호출될 것
                // = StackOverFlow 에러 발생함
            }
        }

        // 파일을 저장, Load 실패시 파일 만들기
        public static void Save()
        {
            string booksOutput = "";
            booksOutput += "<books>\n";     // 여는 태그
            foreach (var book in books)
            {
                // 도서
                booksOutput += "    <book>\n";
                booksOutput += $"       <{ISBN}>{book.isbn}</{ISBN}>\n";
                booksOutput += $"       <{NAME}>{book.name}</{NAME}>\n";
                booksOutput += $"       <{PUBLISHER}>{book.publisher}</{PUBLISHER}>\n";
                booksOutput += $"       <{PAGE}>{book.page}</{PAGE}>\n";
                booksOutput += $"       <{BORROWEDAT}>{book.BorrowedAt}</{BORROWEDAT}>\n";
                booksOutput += $"       <{ISBORROWED}>" + (book.isBorrowed ? 1 : 0) + $"</{ISBORROWED}>\n";
                booksOutput += $"       <{USERID}>{book.userId}</{USERID}>\n";
                booksOutput += $"       <{USERNAME}>{book.userName}</{USERNAME}>\n";
                booksOutput += "    </book>\n";
            }
            booksOutput += "</books>\n";    // 닫는 태그

            File.WriteAllText("./Books.xml", booksOutput);  // 기존꺼 덮어씀

            // 유저
            string usersOutput = "";
            usersOutput += "<users>\n";
            foreach (var user in users)
            {
                usersOutput += "    <user>\n";
                usersOutput += $"       <{ID}>{user.Id}</{ID}>\n";
                usersOutput += $"       <{NAME}>{user.Name}</{NAME}>\n";
                usersOutput += "    </user>\n";

            }
            usersOutput += "</users>\n";

            File.WriteAllText("./Users.xml", usersOutput);
        }

    }
}
