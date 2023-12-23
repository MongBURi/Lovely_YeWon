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
    public partial class Form2 : Form
    {
        int number;
        public Form2()
        {
            // 문제) Random 함수를 이용하여 숫자 맞추기 프로그램.

            InitializeComponent();              // 이미지 생성

            // Random r = new Random();
            // number = r.Next(1, 11);
            number = new Random().Next(1, 11);  // 넘버값 생성
            Console.WriteLine(number);          // 콘솔창 출력
        }

        private void button1_Click(object sender, EventArgs e)
        { 
            int mynum = int.Parse(textBox1.Text);   // 입력받은 값을 mynum에 저장
            if (number < mynum)
            {
                MessageBox.Show("정답보다 큰 값을 골랐습니다!");
            }
            else if (number > mynum)
            {
                MessageBox.Show("정답보다 작은 값을 골랐습니다!");
            }
            else
            {
                MessageBox.Show("정답!");
                number = new Random().Next(1, 11);
                Console.WriteLine(number);
            }

        }
    }
}
