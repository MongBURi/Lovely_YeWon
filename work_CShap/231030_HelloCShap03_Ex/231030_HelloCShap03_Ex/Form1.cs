using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231030_HelloCShap03_Ex
{
    public partial class Form1 : Form
    {
        // 문제) List를 이용하여 문자열을 추가 및 제거하는 화면을 만드시오.

        // list라는 속성을 추가한다. == list도 Form1의 속성이다.
        public List<string> list = new List<string>();

        public Form1()
        {
            InitializeComponent();

            // ListText Label의 텍스명 지정.
            ListText.Text = "(내용)";

            // 버튼에 추가할 값 생성.(랜덤)
            Random r = new Random();

            // 버튼의 텍스트명을 랜덤 값으로 변경한다.
            button1.Text = r.Next(100) + "";
            button2.Text = r.Next(100).ToString();
            button3.Text = r.Next(100).ToString();
            button4.Text = r.Next(100).ToString();

            button5.Text = button1.Text;
            button6.Text = button2.Text;
            button7.Text = button3.Text;
            button8.Text = button4.Text;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            // 리스트에 값 추가.(랜덤으로 나온 값)
            list.Add(button1.Text);
            ListText.Text = "";         // 기존의 내용을 지워야 추가 다시했을 때
                                        // 1 → 1/1 → 1/1/1 → 1/1/1/1...가 안 됨
            // list에 들어있는 값 조회.
            foreach (var item in list)
            {
                ListText.Text += item + ", ";   // 리스트에 들어있는 값을 적고, 띄워쓰기
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {            
            list.Add(button2.Text);
            ListText.Text = "";
            foreach (var item in list)
            {
                ListText.Text += item + ", ";
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            list.Add(button3.Text);
            ListText.Text = "";
            foreach (var item in list)
            {
                ListText.Text += item + ", ";
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            list.Add(button4.Text);
            ListText.Text = "";
            foreach (var item in list)
            {
                ListText.Text += item + ", ";
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            //list.Remove(button5.Text);
            // sender :: 이벤트를 발생시키는 주체
            // 즉 여기선 button5를 의미한다.
            list.Remove((sender as Button).Text);
            ListText.Text = "";
            foreach (var item in list)
            {
                ListText.Text += item + ", ";
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            list.Remove(button6.Text);
            ListText.Text = "";
            foreach (var item in list)
            {
                ListText.Text += item + ", ";
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            list.Remove(button7.Text);
            ListText.Text = "";
            foreach (var item in list)
            {
                ListText.Text += item + ", ";
            }
        }

        private void button8_Click(object sender, EventArgs e)
        {
            list.Remove(button8.Text);
            ListText.Text = "";
            foreach (var item in list)
            {
                ListText.Text += item + ", ";
            }
        }
    }
}
