using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231102_HelloCShap06_Ex
{
    public class Fighter : GameCharacter    // 전사 클래스 : 게임캐릭터(추상)
    {
        // 메소드
        public override void fight()
        {
            MessageBox.Show("주먹으로 적을 공격!");
        }
    }
}
