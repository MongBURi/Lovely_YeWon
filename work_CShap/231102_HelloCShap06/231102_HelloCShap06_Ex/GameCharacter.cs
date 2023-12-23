using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231102_HelloCShap06_Ex
{
    public abstract class GameCharacter
    {
        // 속성
        public string Id { get; set; }  // 아이디
        public int Lv { get; set; }     // 레벨

        // 메소드
        public abstract void fight();   // 오버라이딩 필수
        public virtual string Die()     // 오버라이딩이 가능함(오버라이딩 필수)
        {
            return "으악";
        }
        public string SayHello()        // 오버라이딩 안 됨
        {
            string introduce = "만나서 반갑습니다.\n제 소개를 할게요.\n";
            introduce += "Id: " + Id + "\n";
            introduce += "Lv: " + Lv + "\n";
            return introduce;
        }

    }
}
