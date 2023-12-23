using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Web;

namespace _231030_HelloCShap03_Class
{
    public class Animal
    {
        // 3번(2번을 줄임) :: 표준문법
        public string name { get; set; }
        public int age { get; set; }


        // 2번(1번을 줄임)
        private int id; // 소문자
        public int Id { get { return Id; } set { id = value; } }    // 대문자
                
        private string species;
        public string Species
        { get => species; set => species = value; }


        // 1번
        private string masterName;
        public string getMasterName()
        {
            return masterName;
        }
        public void setMasterName(string masterName)
        {
            this.masterName = masterName;
        }

    }
}
