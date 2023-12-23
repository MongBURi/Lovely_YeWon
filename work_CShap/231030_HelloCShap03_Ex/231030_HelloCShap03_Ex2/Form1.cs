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
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            List<Student> students = new List<Student>();   // 원래 밖에 선언해야 됨
            students.Add(new Student() { name = "이동준", grade = 1 });    // 새 객체를 생성과 동시에 값 넣음
            Student student = new Student();
            student.grade = 2;
            student.name = "유지웅";
            students.Add(student);
            students.Add(new Student() { name = "정욕억", grade = 3 });
            students.Add(new Student() { name = "이상하", grade = 4 });
            students.Add(new Student() { name = "백정윤", grade = 1 });
            students.Add(new Student() { name = "신예원", grade = 2 });

            for (int i = 0; i < students.Count; i++)
            {
                Label label = new Label();
                label.Text = $"이름:{students[i].name}, 학년:{students[i].grade}";
                label.AutoSize = true;  // 글자 길어도 늘어남
                label.Location = new Point(130, 10 + (25 * i));  
                Controls.Add(label);
            }

            // 뭔가를 삭제할 땐 역for문을 써야 한다.
            // 그래야 indexBoundError나 indexOverFlow에러가 나지 않는다.
            // 앞부터 지울 경우 ex) 인덱스는 4까지밖에 없는데 5자리에 접근할려고 함
            // 뒤부터 지울 경우 6부터든 5부터는 시작해서 0까지 지우므로 문제가 없다
            for (int i = students.Count - 1; i >= 0; i--)
            {
                if (students[i].grade > 1)  // i번째가 1보다 크다면(2학년 이상일 경우)
                {
                    students.RemoveAt(i);   // i번째 날려버림
                }
            }

            for (int i = 0; i < students.Count; i++)
            {
                Label label = new Label();
                label.Text = $"이름:{students[i].name}, 학년:{students[i].grade}";
                label.AutoSize = true;
                label.Location = new Point(330, 10 + (25 * i));
                Controls.Add(label);
            }
        }


        private void button1_Click(object sender, EventArgs e)
        {
            Hide(); // 뒤에 창 숨김
            new Form2().ShowDialog();   // 버튼 클릭하면 Form2창이 뜸
            Show(); // 뒤에 창 다시 나타남
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Hide();
            new Form3().ShowDialog();
            Show();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Hide();
            new Form4().ShowDialog();
            Show();
        }
    }
}
