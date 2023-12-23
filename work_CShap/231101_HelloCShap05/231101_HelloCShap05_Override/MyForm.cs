using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231101_HelloCShap05_Override
{
    public class MyForm : Form
    {
        public MyForm()
        {
            // 창이 생길 때 요렇게 뜨게 만든다
            Name = "CustomeForm";
            Text = "안녕";

        }

    }
}
