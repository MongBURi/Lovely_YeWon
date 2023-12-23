using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231030_HelloCShap03_Class
{
    public class Student
    {
        public int id;
        public string name;

        // 이렇게 매개변수가 있는 생성자를 만들게 되면
        // 매개변수가 없는 생성자는 자연스럽게 사라진다.
        // 원래는... public Studet(){} 이렇게 빈 생성자가 자동으로 들어감
        // 그래서 Product 클래스에도 public Product(){}가 있는 것임.(안 보이지만)
        public Student (int id, string name)
        {
            this.id = id;
            this.name = name;
        }
    }
}
