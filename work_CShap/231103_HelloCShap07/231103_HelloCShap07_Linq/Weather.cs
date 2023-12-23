using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231103_HelloCShap07_Linq
{
    // 기상청 버튼 설명, 객체로 만들어서 해도 되고 클래스로 만들어서 해도 된다
    public class Weather
    {
        // 속성
        public string Hour { get; set; }
        public string Day { get; set; }
        public string wfKor {  get; set; }

        // 메소드(ToString()오버라이딩)
        public override string ToString()
        {
            return "시간: " + Hour + ", 날짜: " + Day + ", 날씨: " + wfKor;
        }

    }
}
