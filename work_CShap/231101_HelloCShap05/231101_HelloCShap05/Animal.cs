using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231101_HelloCShap05
{
    public class Animal
    {
        // 클래스 변수 (자손 클래스도 같은 값을 공유한다)
        public static int count = 0;

        // 필드
        public int Age { get; set; }    // 나이

        // 메소드
        protected void Born()   // Animal을 상속받은 객체만 호출해서 쓸 수 있따.
        {
            Console.WriteLine("응애응애");
        }
        public void Sleep()
        {
            Console.WriteLine("잠을 잔다.");
        }
        public void Eat()
        {
            Console.WriteLine("먹는다.");
        }

        // 하위 클래스에서 오버라이드를 할 메소드라면 virtual이라는 키워드를 써야 함        
        public virtual void Wash()
        {
            Console.WriteLine("물로 씻깁니다.");
        }



    }
}
