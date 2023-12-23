using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCShap02
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /* 문제1)
            삼각형 모양의 피라미드를 만드시오. */
            if (false)
            {
            #region first Que                
            
                // 층수 입력 받기
                Console.Write("몇 층인가요?: ");
                int floor = int.Parse(Console.ReadLine());

                for (int i = 1; i <= floor; i++)    // floor = 3 :: 3층 피라미드
                {
                    // 3층인 경우라면 띄어쓰기가 2번, 1번, 0번 일 것이다.
                    for (int j = 0; j < floor - i; j++)
                    {
                        Console.Write(" ");     // Console.Write는 한 줄 띄지 않음.
                    }

                    // 별의 개수는 1개, 2개, 3개가 될 것이다.
                    for (int j = 0; j < 2 * i - 1; j++)
                    {
                        Console.Write("*");
                    }
                    Console.WriteLine();    // 한 줄 띄어쓰기
                }            
                #endregion
            }


            /* 문제2)
            5개의 숫자를 입력 받은 뒤
            가장 작은 수와 가장 큰 수를 출력하는 프로그램을 작성하시오.  */
            if (false)
            {
            #region Second Que
            // 5개의 숫자를 저장할 배열 생성.
            int[] numbers = new int[5];     // → { 0, 0, 0, 0, 0 }값이 저장된 상태
                                            // → int max = 0; 하면 안 됨
                                            // 5개 숫자 입력 받기(반복문)
            for (int i = 0; i < numbers.Length; i++)
            {
                Console.Write("값 입력: ");
                numbers[i] = int.Parse(Console.ReadLine());
            }

            // 최대값/최소값 저장할 변수 선언.
            int max = numbers[0];   // 값 입력 받은 뒤, max값 min값 넣어야 함
            int min = max;          // 최소값은 최대값으로 지정 :: 처음 들어올 수 있는 값은 numbers[0]이기 때문(?)

            // 숫자 비교해서 최대값/최소값 저장.(반복문)
            for (int i = 1; i < numbers.Length; i++)
            {
                // max값(0번 인덱스)과 다음 인덱스값 비교.
                if (max < numbers[i])   // 다음 값이 더 크다면, max값 변경
                {
                    max = numbers[i];
                }
                // min값과 다음 인덱스값 비교.
                if (min > numbers[i])   // 다음 값이 더 작다면, min값 변경
                {
                    min = numbers[i];
                }
            }

            // 최대값/최소값 출력.
            Console.WriteLine("최대값: " + max);
            Console.WriteLine("최소값: " + min);
            #endregion
            }


            /* 문제3)
            아래의 규칙을 따르는 수열의 20번째 숫자를 프로그램을 만들어 찾으시오.
            - 1, 11, 12, 1121, 122111, 112213   (개미수열)
            - 첫 번째 수열: 1
            - 두 번째 수열: 1이 1개 = 11
            - 세 번째 수열: 1이 2개 = 12
            - 네 번째 수열: 1이 1개, 2가 1개 = 1121
            - 다섯 번째 수열: 1이 2개, 2가 1개, 1이 1개 = 122111
            - 여섯 번째 수열: 1이 1개, 2가 2개, 1이 3개 = 112213    */
            if (false)
            {
                #region Third Que

                // 처음에 주어지는 값
                string start = "1";

                // 20번 반복
                for (int i = 0; i < 20; i++)
                {
                    int count = 0;          // 읽고 말하기에서 해당 숫자의 개수(읽을 숫자의 개수)
                    char num = start[0];    // 읽을 숫자
                    string end = "";        // 중간 누적 값 ex) 12를 읽고 1121을 말할 때, 11을 저장할 공간

                    // n번째 값 출력.
                    Console.WriteLine((i + 1) + "번째: " + start);

                    // 값(1)을 읽고 결과(1은 1개다)를 말해야 한다.
                    for (int j = 0; j < start.Length; j++)
                    {
                        if (num != start[j])
                        {
                            end = end + num + count;
                            num = start[j];
                            count = 1;
                        }
                        else
                        {
                            count++;
                        }
                    }
                    end = end + num + count;
                    start = end;
                }   // 첫 번째 for문
                #endregion
            }

            // 추가문제)
            // 1. C 플젝 C#으로 변경.

            // 2. 자신만의 법칙 적용한 로또 번호 생성기.
            if (false)
            {
                #region Lotto Que

                int[] lotto = new int[6];
                int bns = -1;
                Random r = new Random();    // 랜덤 객체 생성

                for (int i = 0; i < 6; i++)
                {
                    int n = r.Next(1, 46);   // 1~45까지 값을 삽입한 것
                    bool isDuplicate = false;   // 중복체크

                    for (int j = 0; j < i; j++) // 중복 여부를 검증
                    {
                        if (n == lotto[j])
                        {
                            Console.WriteLine("n = " + n + ", j = " + j);  // 디버깅(몇 번째에서 중복이 일어났는가)
                            Console.WriteLine("중복!");
                            foreach (var item in lotto) // 여태까지 넣었던 값들 다 출력
                            {
                                if (item == 0)
                                {
                                    break;
                                }
                                Console.WriteLine(item + " ");
                            }
                            isDuplicate = true;
                            i--;
                            break;
                        }
                    }

                    if (isDuplicate)    // continue일 경우 밑에 코드 실행x
                    {
                        continue;
                    }
                    lotto[i] = n;
                }

                Console.WriteLine("로또");

                //Array.Sort(lotto);  // 오름차순 정렬(가장 쉬운 방법)
                // 버블 정렬(오름차순)
                for (int i = 0; i < lotto.Length; i++)
                {
                    for (int j = 0; j < lotto.Length - 1; j++)  // 마지막값은 비교 대상이 없기 때문에 -1까지
                    {
                        if (lotto[j] > lotto[j + 1])    // J번째랑 J+1번째랑 비교해서 자리바꾸기
                        {
                            int temp = lotto[j];
                            lotto[j] = lotto[j + 1];
                            lotto[j + 1] = temp;
                        }
                    }
                }

                foreach (var item in lotto)
                {
                    Console.Write(item + " ");
                }
                // Environment.NewLine == \n
                // Environment.NewLine :: OS별로 개행문자가 다르므로
                // OS마다 다른 개행 문자를 씀.
                Console.WriteLine(Environment.NewLine + "보너스");
                bns = r.Next(1, 46);

                for (int i = 0; i < 6; i++)
                {
                    if (bns == lotto[i])
                    {
                        i = -1;
                        bns = r.Next(1, 46);
                    }
                }
                Console.WriteLine(bns);


                #endregion
            }


            // 3. C# 콘솔: ◆모양 출력.
            #region Diamond Que                
                        
            Console.Write("몇 층인가요?: ");
            int flo = int.Parse(Console.ReadLine());

            for (int i = 1; i <= flo; i++)
            {                
                for (int j = 0; j < flo - i; j++)
                {
                    Console.Write(" ");
                }
                for (int j = 0; j < 2 * i - 1; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }

            // 밑에다가 거꾸로 된 다이아몬드를 추가해야 함.
            //for (int i = 1; i < flo; i++)  // 밑에 for조건이랑 같음
            for (int i = 1; i <= flo - 1; i++)
            {
                for (int j = 0; j < /*flo - */i; j++)       // 공백 늘어남
                {
                    Console.Write(" ");
                }
                for (int j = 0; j < 2 * (flo - i) - 1; j++) // 별 줄어듦
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
            #endregion


            // 4. 12지신 전부 출력. ex)1989 → 기사년
            /*
            char[] gab = { '경', '신', '임', '계', '갑', '을', '병', '정', '무', '기' };
            char[] ja = { '신', '유', '술', '해', '자', '축', '인', '묘', '진', '사', '오', '미' };

            Console.Write("연도를 입력하세요: ");
            int.TryParse(Console.ReadLine(), out int year);

            Console.WriteLine($"{year}년은 {gab[year % 10]}{ja[year % 12]}년입니다.");
            */
            int year = DateTime.Now.Year;
            string jisin = "";
            switch (year % 10)
            {
                case 0:
                    jisin += "경";
                    break;
            }






        }   // main문
    }
}
