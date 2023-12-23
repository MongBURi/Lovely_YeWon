using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231101_HelloCShap05_Override
{
    public abstract class Animal
    {
        // 속성
        public string Name { get; set; }    // 이름
        public int Age { get; set; }        // 나이

        // 메소드 (구현은 하위클래스에 맡김)
        // 즉, 하위클래스는 의무적으로 오버라이딩을 해야 한다
        public abstract void Sleep();       // 잠자기
        public abstract void Eat();         // 먹기
    }
}
