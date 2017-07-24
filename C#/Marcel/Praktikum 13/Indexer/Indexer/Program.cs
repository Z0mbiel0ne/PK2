using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Indexer
{
    class Program
    {
        static void Main(string[] args)
        {
            mannschaft lel = new mannschaft();
            lel[1] = new Spieler()
        }

        public class Spieler
        {
           public int nummer { get; set;}
           public String name { get; set; }
        }
        
        public class mannschaft
        {
            Spieler[] lel = new Spieler[20]; 


            public Spieler this[int i]
            {
                get { return lel[i]; }
                set { lel[i] = value; }
            }
        }

    }
}
