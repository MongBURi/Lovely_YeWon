using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231103_HelloCShap07_Linq
{
    public class Product
    {
        // 속성
        public string Name { get; set; }
        public int Price { get; set; }

        // 메소드(ToString()오버로딩)
        public override string ToString()
        {
            return Name + ": " + Price + "원";
        }
    }
}
