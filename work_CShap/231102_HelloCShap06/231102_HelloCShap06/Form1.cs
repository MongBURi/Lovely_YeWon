using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231102_HelloCShap06
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        // 사번,학번 같은 속성을 문자열로 많이 만드는 이유
        // 사번이 문자열일 경우
        private void button1_Click(object sender, EventArgs e)
        {            
            Sawon<String> dj = new Sawon<String>();
            dj.Number = textBox1.Text;
            label1.Text = "사번은 " + dj.Number + "입니다.";
        }

        // 사번이 숫자일 경우
        private void button2_Click(object sender, EventArgs e)
        {            
            Sawon<int> sh = new Sawon<int>();
            int.TryParse(textBox2.Text, out int num);
            sh.Number = num;
            label2.Text = "사번은 " + sh.Number + "입니다.";

            /* 사번을 int로 저장할 경우 예외처리를 해야 하는 수고가 있다
            if (int.TryParse(textBox2.Text, out int num))
            {
            sh.Number = num;
            label2.Text = "사번은 " + sh.Number + "입니다.";
            }   */
        }



        // ◆ 행기 움직이는 함수(미니게임)
        // 이 함수가 실행되면서 out키워드가 붙은 건
        // 함수 바깥에 있는 변수인데, 그것의 값이 바뀐다.
        // 마치 C언어의 포인터나 C#의 ref랑 마찬가지로 말이다.
        // ref :: 참조자, 함수에서 값이 바뀌면, 바깥에서도 바뀐다.
        // out :: 참조자, 함수에서 값이 바뀌면, 바깥에서도 바뀐다, 반드시 대입문이 필요함.
        // 즉 여기선 rx = 0; ry = 0; 이런 거라도 넣어줘야 된다.
        // 할당(n = 0;)이 의무!
        void NextPosition(int x, int y, int vx, int vy, out int rx, out int ry)
        {
            // 다음 위치 = 현재 위치 + 현재 속도
            rx = x + vx;
            ry = y + vy;                        
        }
        private void button3_Click(object sender, EventArgs e)
        {
            // Environment.NewLine == \n이랑 똑같음(윈도우 기준)
            int x = 0, y = 0;   // x와 y 모두 0
            string nowPos = $"현재 위치 : ({x}, {y})" + Environment.NewLine;            
            int movePos = int.Parse(textBox3.Text); // 속도에 영향 주는 변수

            // 함수 안에서 값이 바뀌면 함수 외부의 int x = 0, y = 0;값도 바뀜
            NextPosition(x, y, movePos + 10, movePos + 20, out x, out y);            

            nowPos += $"이동 후 위치 : ({x}, {y})" + Environment.NewLine;
            label3.Text = nowPos;

            // 함수 실행 후 x,y값이 바뀌었다.
            // out은 ref와 다르게 대입문이 필수다.
            // 함수 바깥에 있는 값을 바꾸고 싶을 때 out을 쓴다(?)
        }


        // ======================== 인터페이스 설명 ============================

        List<Product> products = new List<Product>();
        // 제품 추가 및 출력 버튼
        private void button4_Click(object sender, EventArgs e)
        {
            products.Add(new Product() { Name = textBox4.Text} );   // 이름 추가
            products.Last().Price = int.Parse(textBox5.Text);       // 가격 추가
            //products[0].Price = int.Parse(textBox5.Text); // 오류

            string prices = "";
            foreach (var item in products)
            {
                prices += item + "\n"; // ToString 오버라이딩 해야 제대로 나옴
            }

            label4.Text = prices;
        }

        // 제품을 가격순으로 출력할 버튼
        private void button5_Click(object sender, EventArgs e)
        {
            label4.Text = "";
            products.Sort();    // Product클래스에 IComparable의 CompareTo가
                                // 구현되어 있어야 한다
            // int로만 된 List 오름차순 정렬 가능.
            // products로 된 List는 정렬 기준을 몰라서 못 함.(뭘로 비교해야 돼?)
            // → IComparable 인터페이스 활용
            
            foreach (var item in products)
            {
                label4.Text += item + "\n";
            }

            // 인터페이스도 다형성을 적용받음
            // 추상클래스와 마찬가지로 단독으로 인스턴스 생성 불가능.
            //IComparable ic = new IComparable();   // 불가능
            IComparable<Product> i = new Product();
        }
    }
}
