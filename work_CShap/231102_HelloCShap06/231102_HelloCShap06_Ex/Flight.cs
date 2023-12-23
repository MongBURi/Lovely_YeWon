using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231102_HelloCShap06_Ex
{
    public class Flight : IRiderable, IFlierable    // 인터페이스 다중 상속
    {
        // 메소드
        // IFlierable 1개
        public void fly()
        {
            MessageBox.Show("행복한 비행되세요~");
        }

        // IRiderable 2개
        public void run()
        {
            MessageBox.Show("안전띠 꽉 매세요~");
        }

        public void stop()
        {
            MessageBox.Show("뱅기! 멈춰!");
        }
    }
}
