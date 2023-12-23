using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace _231102_HelloCShap06_Ex
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
              

        // 전사 - 싸우기
        private void button1_Click_1(object sender, EventArgs e)
        {
            Fighter f = new Fighter();
            GameCharacter g = new Fighter();    // 다형성 적용됨
            //GameCharacter gg = new GameCharacter(); 오류
            f.fight();
            g.fight();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //Fighter f = new Fighter();
            //f.Die();
            string msg = new Fighter().Die();
            MessageBox.Show(msg);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Fighter f = new Fighter();
            f.Id = textBox1.Text;
            f.Lv = int.Parse(textBox2.Text);
            MessageBox.Show(f.SayHello());
        }

        private void button4_Click(object sender, EventArgs e)
        {
            Fighter f = new Fighter();
            f.Id = textBox1.Text;
            f.Lv = int.Parse(textBox2.Text);
            new Form2(f.SayHello()).Show();
        }

        // 링크 레이블
        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            Process.Start("https://naver.com");
        }
    }
}
