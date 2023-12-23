using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231030_HelloCShap03_Ex2
{
    public partial class Form4 : Form
    {
        List<string> texts = new List<string>();

        public Form4()
        {
            // 문제) list에 임의의 문장들을 만들어 놓고
            // Random 함수를 이용하여 임의의 문장을 출력하도록 하시오.

            InitializeComponent();

            texts.Add("안녕하세요.");
            texts.Add("안녕히가세요.");
            texts.Add("반갑습니다.");
            texts.Add("어서오세요.");
            texts.Add("잘 부탁드립니다.");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = "";
            label1.Text = texts[new Random().Next(texts.Count)];
        }
    }
}
