using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prakitkum_13
{
    class GaragenTor
    {
        public void Oeffnen()
        {
            Console.WriteLine("Garagentor öffnet sich.");
        }

        public void Schliessen()
        {
            Console.WriteLine("Garagentor schließt sich.");
        }
    }


    class GaragenSchliesser : Command
    {
        private GaragenTor garagenTor;

        public GaragenSchliesser(GaragenTor garagenTor)
        {
            this.garagenTor = garagenTor;
        }
        
        public override void Execute()
        {
            garagenTor.Schliessen();
        }
    }

    class GaragenOeffner : Command
    {
        private GaragenTor garagenTor;

        public GaragenOeffner(GaragenTor garagenTor)
        {
            this.garagenTor = garagenTor;
        }

        public override void Execute()
        {
            garagenTor.Oeffnen();
        }
    }
}
