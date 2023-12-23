using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231102_HelloCShap06_Ex
{
    // Conveyancable :: 탈 것
    // 1. 인터페이스는 상속을 받을 수 있다.
    // → IConveyancable 이거만 있으면 3개의 메소드를 구현해야 한다.
    // 2. 속성도 추가가 가능함.
    // (Java의 인터페이스에서는 상수가 아닌 이상 속성은 추가 불가능함)
    public interface IConveyancable : IRiderable, IFlierable
    {
        string Name { get; set; }


    }
}
