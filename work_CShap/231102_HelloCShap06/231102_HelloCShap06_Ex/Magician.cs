using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231102_HelloCShap06_Ex
{
    public class Magician : GameCharacter
    {
        // 메소드
        public override string Die()
        {
            return "연기처럼 사라진다";
        }
        public override void fight()
        {
            MessageBox.Show("마법 공격!");
        }
    }
}
