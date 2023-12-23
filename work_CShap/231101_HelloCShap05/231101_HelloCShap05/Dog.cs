using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231101_HelloCShap05
{
    public class Dog : Animal
    {
        // 필드
        public string Color { get; set; }

        // 생성자
        public Dog()
        {
            Born();
        }

        // 메소드
        public void Bark()
        {
            Console.WriteLine("멍멍");
        }
    }
}
