using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231030_HelloCShap03
{
    public partial class Form1 : Form
    {
        // student 클래스의 name과 같은 속성에 해당함
        string randomText = "안녕하세요? 이동준입니다. 반갑습니다!";

        // Java의 ArrayList
        // C#의 List가 Java의 ArrayList랑 사실상 똑같음.
        // Java의 List :: 인터페이스/ ArrayList :: List를 구현한 클래스
        List<string> nameList = new List<string> { "이동준", "이유나", "박명회"};
        List<int> ageList = new List<int> { 34, 24, 40};
        List<int> ageList2 = new List<int> { };

        // TMI+참고) C#에 있는 ArayyList는
        // 자바의 ArarayList<Object>랑 동일함.
        // 즉 아무거나(데이터타입) 다 들어가는 리스트이다.

        public Form1()  // 생성자
        {
            InitializeComponent();

            // 코드에서 버튼 만들기
            Button b = new Button();
            // 속성
            b.Text = "코드로 만든 버튼";
            b.AutoSize = true;
            b.Location = new Point(10, 10);
            // Controls :: Form1 안에 있는 모든 구성요소들.(Button들 등/가장 중요)
            Controls.Add(b);    // Add코드가 없으면 b는 화면에 안 보임!
        }

        // btn_test 클릭시 수행할 함수
        // 클래스의 메소드에 해당함
        private void btn_test_Click(object sender, EventArgs e)
        {
            // 문제1) 버튼 클릭하면 checkBox1의 텍스트가 바뀌게 하시오.
            checkBox1.Text += "❤";

            Random r = new Random();
            // checkBox2.Text는 String이고, randomText는 char이기 때문에 String으로 만들어 줄 필요가 있다.
            // 이 두 코드는 똑같은 거임. char를 String으로 변환한 것
            checkBox2.Text = randomText[r.Next(randomText.Length)] + "";
            checkBox2.Text = randomText[r.Next(randomText.Length)].ToString();

            /*
            문제2) 체크 박스가 체크된 상태일 때 버튼 클릭하는 거랑
            체크 박스가 체크 해제된 상태일 때 버튼 클릭하는 거랑
            출력되는 메세지가 다르게 해보시오. */
            if (checkBox1.Checked)
            {
                MessageBox.Show("체크 체크❤");
            }
            else
            {
                MessageBox.Show("체크 해제💔");
            }

            /*
            문제3) 체크 박스가 체크가 되어 잇으면 1번을 수행(텍스트변환)
            체크 박스가 체크 안 되어 잇으면 아~무것도 수행하지 않는다.  */
            
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            
        }
    }
}
