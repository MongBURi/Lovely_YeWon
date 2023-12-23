using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231030_HelloCShap03_Class
{
    internal class Product
    {
        // static이 안 붙은 것들은 인스턴스 변수라고 부른다.
        // 인스턴스가 선언되고 나서야 메모리에 올라가기 때문이다.
        // prodeuct p = new product();  // 이 코드가 필수
        // p.name = "감자";
        // 인스턴스 별로 값이 다를 수 있다.
        public string name;
        public int price;

        // static이 붙은 것들은 클래스 변수라고 부른다.
        // 인스턴스 선언되기 전, 즉 프로그램 시작하자마자 메모리에 올라감.
        // Product.companyName = "경북능산";
        // Product 타입 객체들이 모두 공유한다. 공통적으로 접근할 수 있다.
        public static string companyName;
    }
}
