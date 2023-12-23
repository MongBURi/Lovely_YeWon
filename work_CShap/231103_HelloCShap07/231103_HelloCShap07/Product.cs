using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231103_HelloCShap07
{
    public class Product
    {
        // 속성
        public int Id { get; set; }
        public string Name { get; set; }
        public int Price { get; set; }

        // 메소드(오버라이딩)
        public override string ToString()
        {
            return $"Id: {Id}, Name: {Name}, Price: {Price}\n";
        }

    }
}
