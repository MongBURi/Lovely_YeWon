﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231102_HelloCShap06_Ex
{
    public class Car : IRiderable
    {
        // 메소드
        public void run()
        {
            MessageBox.Show("부릉부릉 씽씽");
        }

        public void stop()
        {
            MessageBox.Show("브레이크 끼이이익!");
        }
    }
}
