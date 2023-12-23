using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231101_HelloCShap05_Override
{
    public class DomesticCat : Cat
    {
        // 속성
        public string masterName {  get; set; }     // 집사 이름

        // 메소드
        public override void Eat()
        {
            Console.WriteLine(masterName + "한테 얻어먹어요.");
        }

        public override void grooming()
        {
            Console.WriteLine(masterName + "가 빗겨줘요.");
        }

        public override void hunt()
        {
            Console.WriteLine(masterName + "가 주는 것만 먹어요.");
        }

        public override void Sleep()
        {
            Console.WriteLine(masterName + "가 재워줘요.");
        }
    }
}
