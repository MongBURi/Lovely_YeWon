using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;


namespace _231031_HelloCShap04_chap06
{
    public partial class Form3 : Form
    {
        int limitTime = 0;  // 제한시간
        int answer = 0;     // 정답(1~25 중 하나)
        int nowTime = 0;    // 현재 시간(경과 시간)

        public Form3()
        {
            InitializeComponent();

            label1.Text = "";
            label2.Text = "";
        }

        // 타이머
        private void timer1_Tick(object sender, EventArgs e)
        {
            nowTime++;                  // 경과 시간 증가(1초에 한 번씩 증가)
            if (nowTime > limitTime)
            {
                label2.Text = "Game Over!";
                nowTime = 0;            // 시간 초기화
                timer1.Enabled = false; // 타이머 멈춤
            }
        }

        // 게임 시작 버튼
        private void button1_Click(object sender, EventArgs e)
        {           
            timer1.Interval = 1000;
            timer1.Enabled = false; // 일단 타이머를 멈춤                       

            // 만약 textBox1에 숫자가 아닌 다른 값 넣었다면
            //if (int.TryParse(textBox1.Text, out limitTime) == false)            
            if (!int.TryParse(textBox1.Text, out limitTime))
            {
                Console.WriteLine("제한 시간을 제대로 입력하세요.");
                return; // TryParse 리턴값 → bool타입
            }

            label2.Text = "Gane Start!";
            answer = new Random().Next(1, 26);      // 정답에 1~25 중 랜덤값 저장
            Console.WriteLine("answer = " + answer);
            int count = 1;                          // 순차적으로 버튼 위에 적을 텍스트

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    Button b = new Button();
                    Point p = new Point();  // Point :: 구조체(위치값 나타낼 때 쓰임)
                    p.X = 15 + 100 * j;
                    p.Y = 15 + 15 + 25 * i;
                    b.Location = p;
                    b.Click += B_Click;     // 버튼을 클릭했을 때 B_Click이라는 이벤트 추가
                    b.Text = count + "";    // == count.Tostring();
                    count++;
                    Controls.Add(b);        // 버튼 생성
                }
            }

            nowTime = 0;            // 경과 시간을 초기화
            timer1.Enabled = true;  // 타이머 시작

        }

        // 정답이냐 아니냐 띄워줘야 된다
        private void B_Click(object sender, EventArgs e)
        {
            //object sender :: 이벤트를 발생시킨 주체(=버튼)
            //throw new NotImplementedException();    // 오류 뜨는 게 당연한 거임
            Button Temp = (Button)sender;   // sender와 같은 주소를 가리킨다
            //Temp.BackColor = Color.Red; // 참조변수 :: 모든 곳에 영향을 끼친다
            //if (Temp.Text == answer.ToString())
            if (Temp.Text.Equals(answer.ToString()))
            {
                label2.Text = "You Win!";
                nowTime = 0;
                timer1.Enabled = false;
            }
            else
            {
                label2.Text = "이건 보물이 아닙니다!";
            }
        }
    }
}
