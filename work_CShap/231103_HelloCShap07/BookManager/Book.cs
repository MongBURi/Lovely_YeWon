using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BookManager
{
    public class Book
    {
        // 멤버 변수
        public string isbn {  get; set; }       // 도서 고유 번호
        public string name { get; set; }        // 이름
        public string publisher { get; set; }   // 출판사
        public int page { get; set; }           // 페이지 수
        public string userId { get; set; }      // 일종의 FK
        public string userName { get; set; }    // 빌린 사람
        public bool isBorrowed { get; set; }    // 빌린 여부
        public DateTime BorrowedAt { get; set; }// 언제 빌렸는지

    }
}
