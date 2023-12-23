using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231103_HelloCShap07
{
    public partial class Form1 : Form
    {
        // 델리게이트 생성
        delegate void TestDelegate();   // TestDelegate는 자료형이다

        // 리스트 생성
        List<Product> products = new List<Product>();

        // 생성자
        public Form1()
        {
            InitializeComponent();

            products.Add(new Product());    // Add로 공간을 추가해야 인덱스에 접근 가능
            products[0].Name = "감자";
            products[0].Id = 2;
            products[0].Price = 500;
            products.Add(new Product());
            products[1].Name = "고구마";
            products[1].Id = 3;
            products[1].Price = 5000;
            products.Add(new Product());
            products[2].Name = "귤";
            products[2].Id = 1;
            products[2].Price = 100;
            // 감자, 고구마, 귤 순으로 출력될 것이다
            // 가격(오름차순) :: 귤, 감자, 고구마
            // Id(내림차순) :: 고구마, 감자, 귤

            label1.Text = "";
            label2.Text = "";
            button2.Text = "가격 오름차순";
            button3.Text = "Id 내림차순";

            // 막간 질문 :: button2.AutoSize = true 옵션은 권장사항일까?
            //              → ㄴㄴ. 제일 긴 언어에 맞춰서 버튼 레이아웃 맞춤.
            button2.AutoSize = true;    // 글자 길어지면 버튼 길이 늘어남
            button3.AutoSize = true;

            // ================================================================
            // 버튼 생성(디자인 창에서는 안 보임)
            Button b = new Button();
            b.Click += myEvert;                                         // 이벤트1
            b.Click += delegate (object s, EventArgs e)                 // 이벤트2
            {
                SayMsg();
            };
            b.Click += (s, e) => { MessageBox.Show("하이루 하이루"); };   // 이벤트3
            b.Location = new Point(100, 100);
            b.Text = "테스트";

            // 이벤트 삭제 :: 메소드에 이름이 있다면, 해당 메소드는 이벤트에서 제외 가능
            b.Click -= myEvert; // myEvert라는 이름이 있음

            // 버튼 1개에 3개의 이벤트(=메소드)가 들어간 거임
            Controls.Add(b);

        }

        // 버튼 생성 설명할 때, 이벤트 추가
        private void myEvert(object sender, EventArgs e)
        {
            MessageBox.Show("방가방가");
        }

        // 메소드 2개 생성
        void SayMsg()
        {
            MessageBox.Show("안녕하세요");
        }
        void LoopFanc(TestDelegate a, int count)
        {
            for (int i = 0; i < count; i++)
            {
                a();
            }
        }


        // 델리게이트 설명
        private void button1_Click(object sender, EventArgs e)
        {
            // 델리게이트 변수에 담아서 사용할 수도 있다.
            TestDelegate t = SayMsg;
            t();

            SayMsg();   // 한 번 호출
            LoopFanc(SayMsg, 3);    // SayMsg를 세 번 호출


            // 무명 델리게이트 :: 메소드이긴한데, 한 번만 쓰이는 메소드이며 이름이 없는 메소드이다.
            LoopFanc(delegate () { MessageBox.Show("무명 델리게이트"); }, 2);

            // 람다 :: 무명 델리게이트를 축약한 형태이다.
            LoopFanc(() => { MessageBox.Show("람다"); }, 3); // =>를 람다라고 한다(?)

        }


        // 버튼2 메소드 생성
        int compare(Product a, Product b)   // 가격 비교
        {
            return a.Price.CompareTo(b.Price);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            products.Sort(compare); // compare함수가 한 번 쓰이고 끝임 => 그럴 바에 그냥 만들겠다(버튼3)
            foreach (var item in products)
            {
                label1.Text += item;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            // 무명 델리게이트
            //products.Sort(
            //    delegate (Product a, Product b)
            //    {
            //        return b.Id.CompareTo(a.Id);
            //    }
            //    );

            // 람다1 (매개변수의 타입이랑 return키워드도 생략했음)
            //       (극한으로 생략 가능한 이유 :: Sort()자체가 어쩌구저쩌구)
            //products.Sort((a, b) => b.Id.CompareTo(a.Id));

            // 람다2
            products.Sort((a, b) => { return b.Id.CompareTo(a.Id); });

            foreach (var item in products)
            {
                label2.Text += item;
            }
        }


        // 스레드 설명용 메소드(A 100번 출력)
        void printA()
        {
            for (int i = 0; i < 100; i++)
            {
                Console.Write('A');
            }
        }

        // 스레드 설명
        private void button4_Click(object sender, EventArgs e)
        {
            //스레드 생성
            Thread t1 = new Thread(printA); // 스레드는 매개변수로 메소드가 들어간다
            Thread t2 = new Thread(() =>
            {
                for (int i = 0; i < 100; i++)
                {
                    Console.Write('B');
                }
            });

            Thread t3 = new Thread(delegate ()
            {
                {
                    for (int i = 0; i < 100; i++)
                    {
                        Console.Write('B');
                    }
                }
            });

            // 시분할 시스템(= 비동기화) != 동기화 :: 누군가의 영향을 받는 것
            // a작업 좀 끊겼다 싶으면 b작업 하고, b작업 좀 끊겼다 싶으면 c작업하고...
            t1.Start();
            t2.Start();
            t3.Start();

            // 이런 방법도 있다
            new Thread(
                () =>
                {
                    for (int i = 0; i < 100; i++)
                    {
                        Console.Write('D');
                    }
                }).Start();     // 저리 비켜! 나(D)도 나올거야!@ 하고 뜬금포 출력됨

            // C#에서는 Thread관련된 이슈가 하나 있음.
            // CrossThread 이슈
            // Thread가 GUI쪽을 건드리게 되면 튕기는 오류.
            // (STAThread라는 메인 스레드가 있는데 내가 만든 스레드가 건드려서 오류 발생)
            // 이 부분을 따로 처리해 주는 방법들이 있으니 참고할 것

        }
    }
}
