using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231026_Ex
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /* 문제1)
            삼각형 모양 피라미드를 만드시오.  */

            // 삼각형 높이 입력
            Console.Write("피라미드의 높이를 입력하세요: ");
            int.TryParse(Console.ReadLine(), out int height);

            // 삼각형 출력(높이)
            for (int i = 1; i <= height; i++)
            {
                // 공백 출력
                for (int j = 1; j <= height - i; j++)
                {
                    Console.Write("　");
                }

                // '★' 출력
                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    Console.Write("★");
                }

                Console.WriteLine(); // 다음 줄로 이동
            }
            // 다이아몬드 삼각형 출력
            for (int i = 1; i <= height; i++)
            {
                // 공백 출력
                for (int j = 10; j <= height - i; j--)
                {
                    Console.Write("　");
                }

                // '★' 출력
                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    Console.Write("★");
                }

                Console.WriteLine(); // 다음 줄로 이동
            }



            /* 문제2)
            5개의 숫자를 입력받은 뒤
            가장 작은 수와 가장 큰 수를 출력하는 프로그램을 작성하시오.   */

            // 입력 받기(숫자 5개)
            Console.Write("첫 번째 숫자 입력: ");
            int.TryParse(Console.ReadLine(), out int num1);
            Console.Write("두 번째 숫자 입력: ");
            int.TryParse(Console.ReadLine(), out int num2);
            Console.Write("세 번째 숫자 입력: ");
            int.TryParse(Console.ReadLine(), out int num3);
            Console.Write("네 번째 숫자 입력: ");
            int.TryParse(Console.ReadLine(), out int num4);
            Console.Write("다섯 번째 숫자 입력: ");
            int.TryParse(Console.ReadLine(), out int num5);

            Console.WriteLine(num1);

            // 가장 큰 숫자 구하는 if문
            if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
            {
                Console.WriteLine($"첫 번째 숫자({num1})가 가장 큽니다.");
            }
            else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
            {
                Console.WriteLine($"두 번째 숫자({num2})가 가장 큽니다.");
            }
            else if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
            {
                Console.WriteLine($"세 번째 숫자({num3})가 가장 큽니다.");
            }
            else if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
            {
                Console.WriteLine($"네 번째 숫자({num4})가 가장 큽니다.");
            }
            else 
            {
                Console.WriteLine($"다섯 번째 숫자({num5})가 가장 큽니다.");
            }

            // 가장 작은 숫자 구하는 if문
            if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
            {
                Console.WriteLine($"첫 번째 숫자({num1})가 가장 작습니다.");
            }
            else if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
            {
                Console.WriteLine($"두 번째 숫자({num2})가 가장 작습니다.");
            }
            else if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
            {
                Console.WriteLine($"세 번째 숫자({num3})가 가장 작습니다.");
            }
            else if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
            {
                Console.WriteLine($"네 번째 숫자({num4})가 가장 작습니다.");
            }
            else
            {
                Console.WriteLine($"다섯 번째 숫자({num5})가 가장 작습니다.");
            }
            Console.WriteLine();



            /* 문제3)
            아래의 규칙을 따르는 수열의 20번째 숫자를 프로그램을 만들어 찾으시오.
            - 1, 11, 12, 1121, 122111, 112213
            - 첫 번째 수열: 1
            - 두 번째 수열: 1이 1개 = 11
            - 세 번째 수열: 1이 2개 = 12
            - 네 번째 수열: 1이 1개, 2가 1개 = 1121
            - 다섯 번째 수열: 1이 2개, 2가 1개, 1이 1개 = 122111
            - 여섯 번째 수열: 1이 1개, 2가 2개, 1이 3개 = 112213    */
            
            // 수열 저장할 배열 선언
            int[] su = { 1 };   // 첫 번째 수열

            // 수열 생성(20번째 까지 반복)
            for (int i = 0; i < su.Length; i++)
            {
                // 앞의 인덱스값을 참조하여 어떠한 경우일 경우 다음 인덱스에 값 추가?
                // su[i-n]인덱스를 참조 > su[i]에 데이터 삽입?
                
            }



            /* 추가문제)
            1. C 플젝 C#으로 변경.

            2. 자신만의 법칙 적용한 로또 번호 생성기.

            3. C# 콘솔: ◆모양 출력.

            4. 12지신 전부 출력. ex)1989 → 기사년    */
            char[] gab = { '경', '신', '임', '계', '갑', '을', '병', '정', '무', '기' };
            char[] ja = { '신', '유', '술', '해', '자', '축', '인', '묘', '진', '사', '오', '미' };

            Console.Write("연도를 입력하세요: ");
            int.TryParse(Console.ReadLine(), out int year);

            Console.WriteLine($"{year}년은 {gab[year % 10]}{ja[year % 12]}년입니다.");

        }
    }
}
