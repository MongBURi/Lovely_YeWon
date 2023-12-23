using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCshap01_03_chap0103
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 자바로 치면 charAt(0) 한 거랑 똑같음
            Console.WriteLine("안녕하세요"[0]);
            Console.WriteLine("안녕하세요"[5]);      // 오류o
            Console.WriteLine("안녕하세요."[5]);     // 오류x
        }
    }
}
