using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231102_HelloCShap06_Ex
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        // 문자열을 매개변수로 받는 생성자 생성
        public Form2(string msg)
        {
            InitializeComponent();
            label1.Text = msg;
        }
    }
}
