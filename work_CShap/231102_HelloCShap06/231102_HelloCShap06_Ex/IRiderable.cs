using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231102_HelloCShap06_Ex
{
    // public class → 클래스 선언
    // public struct → 구조체 선언

    // 인터페이스 네이밍 규칙 :: 
    // C# :: 첫글자 I가 꼭 붙고 뒤는 able이 붙음
    // Java :: 클래스: 첫글자뒤에 able이 붙음
    // 클래스 네이밍 규칙(Java, C#공통) :: 첫 글자가 무조건 대문자
    public interface IRiderable  // 탈 것 
    {
        // 메소드
        void run();     // 달리기
        void stop();    // 멈추기
    }
}
