using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231030_HelloCShap03_Class
{
    public class GameCharacter
    {
        public string id { get; set; }
        public static int theNumberOfUser = 0;

        // 생성자 생성
        public GameCharacter() 
        {            
            theNumberOfUser++;
        }
        public GameCharacter(string id)
        {
            this.id = id;
            theNumberOfUser++;
        }



    }
}
