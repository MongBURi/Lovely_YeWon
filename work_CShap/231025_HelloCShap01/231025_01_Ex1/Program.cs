using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231025_01_Ex1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 자바로 치면 charAt(0) 한 거랑 똑같음
            Console.WriteLine("안녕하세요"[0]);
            Console.WriteLine("안녕하세요"[5]);      // 오류o
            Console.WriteLine("안녕하세요."[5]);     // 오류x


            /* 문제1)
            Inch 단위를 입력 받아 cm 단위를 구하는 코드를 작성하시오.
            1Inch = 2.54cm  */

            Console.Write("단위(Inch)를 입력하세요: ");
            //double inch = 2.54;
            int input = int.Parse(Console.ReadLine());
            Console.WriteLine(input + 2.54);
            Console.WriteLine(input * 2.54 + " cm");
            Console.WriteLine($"{input}inch = {input * 2.54}cm");
            Console.WriteLine();


            /* 문제2)
            킬로그램(kg) 단위를 입력받아 파운드(pound)단위를 구하는 코드를 작성하시오.
            1kg = 2.2062262pound    */
            Console.Write("단위(kg)를 입력하세요: ");
            //double kg = 2.2062262;
            string num = Console.ReadLine();
            input = int.Parse(num);
            Console.WriteLine($"{input}kg = {input * 2.2062262}pound");
            Console.WriteLine();


            // int.Parse() :: 공백을 비롯하여 숫자를 입력하지 않으면 튕김.
            // 이를 보완한 것이 int.TryParse()
            // 엉뚱한 값을 입력해도 튕기지 않고 0을 집어넣음


            /* 문제3)
            원의 반지름을 입력 받아 원의 둘레와 넓이를 구하는 코드를 작성하시오.
            둘레 = 2 * PI * 반지름
            넓이 = PI * 반지름 * 반지름
            PI = 3.14   */
            Console.Write("원의 반지름을 입력하세요: ");            
            
            // 상수
            const double PI = 3.14; // 자바의 final이랑 똑같은 것

            // int.TryParse(Console.ReadLine(), out input)
            int.TryParse(Console.ReadLine(), out int r);      
            
            Console.WriteLine($"둘레 = {2 * PI * r}");
            Console.WriteLine($"넓이 = {r * PI * r}");

        }
    }
}
