using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231025_01_Ex3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /* 문제1)
            사용자에게 태어난 년도를 입력 받아
            그 해의 띠를 출력하는 프로그램을 작성하시오.(if)   */
            Console.Write("년도를 입력하세요(if): ");
            //int year = int.Parse(Console.ReadLine());
            int.TryParse(Console.ReadLine(), out int year);
            year %= 12; // year = year % 12;

            if (year == 0)
            {
                Console.WriteLine("원숭이 띠");
            }
            else if (year == 1)
            {
                Console.WriteLine("닭 띠");
            }
            else if (year == 2)
            {
                Console.WriteLine("개 띠");
            }
            else if (year == 3)
            {
                Console.WriteLine("돼지 띠");
            }
            else if (year == 4)
            {
                Console.WriteLine("쥐 띠");
            }
            else if (year == 5)
            {
                Console.WriteLine("소 띠");
            }
            else if (year == 6)
            {
                Console.WriteLine("호랑이 띠");
            }
            else if (year == 7)
            {
                Console.WriteLine("토끼 띠");
            }
            else if (year == 8)
            {
                Console.WriteLine("용 띠");
            }
            else if (year == 9)
            {
                Console.WriteLine("뱀 띠");
            }
            else if (year == 10)
            {
                Console.WriteLine("말 띠");
            }
            else if (year == 11)
            {
                Console.WriteLine("양 띠");
            }            
            Console.WriteLine();


            /* 문제2)
            현재 년도가 무슨 띠인지 구하는 프로그램을 작성하시오.(switch)  */
            //Console.Write("년도를 입력하세요(switch): ");
            //int.TryParse(Console.ReadLine(), out year);

            int myYear = DateTime.Now.Year % 12;
            // myYear %= 12;

            switch (myYear)
            {
                case 0:
                    Console.WriteLine("원숭이 띠");
                    break;
                case 1:
                    Console.WriteLine("닭 띠");
                    break;
                case 2:
                    Console.WriteLine("개 띠");
                    break;
                case 3:
                    Console.WriteLine("돼지 띠");
                    break;
                case 4:
                    Console.WriteLine("쥐 띠");
                    break;
                case 5:
                    Console.WriteLine("소 띠");
                    break;
                case 6:
                    Console.WriteLine("호랑이 띠");
                    break;
                case 7:
                    Console.WriteLine("토끼 띠");
                    break;
                case 8:
                    Console.WriteLine("용 띠");
                    break;
                case 9:
                    Console.WriteLine("뱀 띠");
                    break;
                case 10:
                    Console.WriteLine("말 띠");
                    break;
                case 11:
                    Console.WriteLine("양 띠");
                    break;
            }
            Console.WriteLine();


            /* 문제3)
            사용자에게 현재 월을 입력 받아 계절을 출력하는 프로그램을 작성하시오.(if)
            12, 1, 2 겨울/ 3, 4, 5 봄/ 6, 7, 8 여름/ 9, 10, 11가을 */
            Console.Write("월(Month)을 입력하세요(if): ");
            int.TryParse (Console.ReadLine(), out int month);

            if (month == 12 || month == 1 || month == 2)
            {
                Console.WriteLine("겨울");
            }
            else if (month == 3 || month == 4 || month == 5)
            {
                Console.WriteLine("봄");
            }
            else if (month >= 6 && month <= 8)
            {
                Console.WriteLine("여름");
            }
            else if (month >= 8 && month < 12)
            {
                Console.WriteLine("가을");
            }
            else
            {
                Console.WriteLine("잘못된 계절입니다.");
            }
            Console.WriteLine();


            /* 문제4)
            현재 월이 무슨 계절인지 구하는 프로그램을 작성하시오.(switch)
            12, 1, 2 겨울/ 3, 4, 5 봄/ 6, 7, 8 여름/ 9, 10, 11가을 */
            //Console.Write("월(Month)을 입력하세요(switch): ");
            //int.TryParse(Console.ReadLine(), out month);

            int myMonth = DateTime.Now.Month;

            switch (myMonth)
            {
                case 12:
                case 1:
                case 2:
                    Console.WriteLine("winter");
                    break;
                case 3:
                case 4:
                case 5:
                    Console.WriteLine("spring");
                    break;
                case 6:
                case 7:
                case 8:
                    Console.WriteLine("summer");
                    break;
                case 9:
                case 10:
                case 11:
                    Console.WriteLine("autumn");
                    break;
                default:
                    Console.WriteLine("잘못된 계절!");
                    break;
            }
            Console.WriteLine();


            /* 문제5)
            필요 자료형(2, 4번째 문제에서 쓴다)
            DateTime.Now.Year
            DateTime.Now.Month  */
        }
    }
}
