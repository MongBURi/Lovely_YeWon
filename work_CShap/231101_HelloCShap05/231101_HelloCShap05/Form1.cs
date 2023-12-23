using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231101_HelloCShap05
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Animal a = new Animal();
            label1.Text = "나이: " + a.Age;
            a.Eat();
            a.Sleep();
            //a.Born();   // protected이므로 바깥에서는 호출이 불가능
                          // 여기서 바깥이란? Animal을 상속받지 않은 클래스를 의미
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Cat c = new Cat();  // Born이 호출됨
            c.Age = 5;  // Animal에 있는 Age를 상속받았음
            label2.Text = "고양이 나이: " + c.Age;
            c.Eat();    // Animal에 있는 메소드 상속받음
            c.Sleep();  // Animal에 있는 메소드 상속받음
            c.Meow();   // 고양이 고유의 메소드
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Dog d = new Dog();  // 생성자 안에서 자동으로 Born이 호출됨
            d.Age = 17;
            d.Color = "White";  // 개 고유의 속성
            label3.Text = "개의 나이: " + d.Age + "\n";
            label3.Text += "개의 털 색깔: " + d.Color;
            d.Eat();
            d.Sleep();
            d.Bark();   // 개 고유의 메소드
        }

        private void button4_Click(object sender, EventArgs e)
        {
            List<Animal> zoo = new List<Animal>();
            zoo.Add(new Animal());
            zoo.Add(new Animal());
            zoo.Add(new Dog());
            zoo.Add(new Dog());
            zoo.Add(new Cat());
            zoo.Add(new Cat());

            Animal a = new Animal();            
            Animal b = new Dog();
            ((Cat)b).Meow();

            (b as Cat).Meow();  // 강제 형변환
            Console.WriteLine("에러 전");
            if (b is Dog)   // 타입 체크하고
            {
                (b as Dog).Bark();  // 형변환 하라. / 여기서 에러 난다.(if로 해결)
                Console.WriteLine("에러 후");
            }

            //var t = b as Cat == null ? b as Dog : b as Cat;
            // t가 null이 아니다의 의미: 형변환(as) 성공
            // null이 된 건 형변환 실패
            var t = b as Cat;
            if (b as Cat != null)
            {
                t.Meow();
            }

            Animal c = new Cat();
            zoo.Add(a);
            zoo.Add(b);
            zoo.Add(c);

            Cat d1 = new Cat();
            Dog d2 = new Dog();
            zoo.Add(d1);
            zoo.Add(d2);

            // foreach (Abimal item in zoo)
            foreach (var item in zoo)
            {
                item.Eat();
                item.Sleep();

                if (item is Cat)    // 타입 체크: is / 인스턴스가 Cat으로 만들어졌다면
                {
                    (item as Cat).Meow();   // 형변환: as
                }
                if (item is Dog)
                {
                    (item as Dog).Bark();
                }
            }

        }

        // 다형성 추가 설명 버튼
        private void button5_Click(object sender, EventArgs e)
        {
            // < 다형성 >
            // "왼쪽 = 오른쪽"의 관계가
            //  오른쪽 is 왼쪽

            // 스마트폰 s = new 핸드폰();
            // 스마트폰 is 핸드폰( O )
            // 핸드폰 is 스마트폰( x ), 누군가는 아직 피쳐폰을 쓴다

            // 여태까지 작성던 방식
            Cat cat = new Cat();
            Dog dog = new Dog();

            // 다형성의 핵심 :: 좌우가 바뀔 수도 있단 소리
            Animal a = new Dog();   // Dog is Animal
            Animal b = new Cat();   // Cat is Animal
            // 왜 굳이 이렇게 쓰느냐?
            // 코드의 중복을 방지하기 위해서. (먹고 자고는 하나로 다 때려넣을 수 있따)

            a.Age = 1;
            a.Eat();
            a.Sleep();

            // 자손클래스 거 갖다쓰고 싶으면 형변환 해라
            ((Dog)a).Bark();
            //((Dog)b).Bark();    // b는 Cat이므로 무작정 형변환시 오류가 난다

            // 그래서 타입 체크하는 방법을 쓴다
            if (b is Dog)   // b가 Dog라면
            {
                ((Dog)b).Bark();
            }
            // 위에서 타입 체크하고 형변환 할 필요 없이
            if (b is Dog)
            {
                (b as Dog).Bark();  // as로 확인만 하면 된다(?)
            }

            // 다른 방법
            var test = b as Dog;
            Console.WriteLine(test == null);
            if (test != null)   //테스트가 널 값이 아니라면
            {
                test.Bark();
            }

            List<Animal> animals = new List<Animal>()
            {
                new Dog(), new Cat(), new Dog()
            };

            // cat, dog, a, b 동물 4마리 만들어서 Add로 추가함
            animals.Add(cat);
            animals.Add(dog);
            animals.Add(a);
            animals.Add(b);

            foreach (var item in animals)
            {
                item.Eat();
                item.Sleep();

                // 자손꺼 써먹을려고 타입 체크
                if (item is Dog)
                {
                    (item as Dog).Bark();
                }
                if (item is Cat)
                {
                    (item as Cat).Meow();
                }
            }

        }

        // 클래스 변수 설명 버튼
        private void button6_Click(object sender, EventArgs e)
        {
            // Age는 인스턴스 별로 다들 각자 다른다.
            // count는 Age, Dog, Cat이 공유하고 있다.
            Cat cat = new Cat();
            Dog dog = new Dog();
            Animal animal = new Animal();

            // Age값(인스턴스 변수)은 각각 다르다
            cat.Age = 5;
            dog.Age = 7;
            animal.Age = 50;

            // count값(클래스 변수)은 조상클래스/자손클래스 공유하고 있다
            Cat.count++;
            Dog.count++;
            Animal.count++;

            MessageBox.Show("count값: " + Animal.count);
            MessageBox.Show("count값: " + Cat.count);
            MessageBox.Show("count값: " + Dog.count);
        }

        private void button7_Click(object sender, EventArgs e)
        {
            new Animal().Wash();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            Cat c = new Cat();
            (c as Animal).Wash();   // 강제 형변환해도 바뀌지 않는다(오버라이드)
        }

        private void button9_Click(object sender, EventArgs e)
        {
            new Dog().Wash();
        }
    }
}
