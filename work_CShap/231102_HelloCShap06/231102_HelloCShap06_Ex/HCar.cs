using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231102_HelloCShap06_Ex
{
    public class HCar : IConveyancable
    {
        private string brandName;
        /*
        public string Name
        { get => brandName;
            set => brandName = value; } 아래의 코드와 동일함*/
        public string Name
        {
            get { return "현대의 자랑: " + brandName; }
            set { brandName = value; }
        }

        public void fly()
        {
            throw new NotImplementedException();
        }

        public void run()
        {
            throw new NotImplementedException();
        }

        public void stop()
        {
            throw new NotImplementedException();
        }
    }
}
