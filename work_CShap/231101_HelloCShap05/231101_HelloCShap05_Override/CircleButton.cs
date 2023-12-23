using System;
using System.Collections.Generic;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231101_HelloCShap05_Override
{
    public class CircleButton : Button  // 기존 버튼 클래스 상속받음
    {
        // 메소드
        // 버튼 클래스 안의 OnPaint메소드를 오버라이드 함
        // Button을 상속받아서 그리는 메소드를 오버라이드 하여서
        // 새로운 컨트롤(=컴포넌트)을 만들어 냈따.
        protected override void OnPaint(PaintEventArgs pevent)
        {
            GraphicsPath g = new GraphicsPath();
            g.AddEllipse(0, 0, ClientSize.Width, ClientSize.Height);
            this.Region = new System.Drawing.Region(g);
            base.OnPaint(pevent);
        }

    }
}
