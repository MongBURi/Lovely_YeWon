using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231102_HelloCShap06
{
    // 인퍼테이스 설명할 때 만듦
    public class Product : IComparable<Product>
    {
        public string Name { get; set; }
        public int Price { get; set; }


        // Product클래스에 : IComparable<Product> 추가해서 인터페이스 추가
        // CompareTo를 정의해 놓으면(= 정렬 기준을 정해놓으면)
        // Sort 수행 시 내가 정한 기준대로 정렬이 된다.
        public int CompareTo(Product other)
        {
            // CompareTo의 결과가 양수 0 음수냐에 따라서 어디로 정렬할 지 결정된다.
            // Sort 함수에서 내부적으로 CompareTo를 호출함
            // 구체적으로 어디서 언제 어떻게 호출하는 지는 모름.
            return Price.CompareTo(other.Price);    // 매개변수price와 속성price 비교
            
        }

        public override string ToString()
        {
            //return base.ToString();   // Object의 ToString을 호출하는 코드
            return "제품명: " + Name + ", " + "가격: " + Price;
        }


    }
}
