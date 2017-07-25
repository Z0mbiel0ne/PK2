using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Praktikum14
{
    class Program
    {
        static void Main(string[] args)
        {
            Auto.Fuhrpark fp = new Auto.Fuhrpark();

            fp.Aufnehmen(new Auto.Auto("Ford", 1995));
            fp.Aufnehmen(new Auto.Auto("Peugeot", 2006));

            Info info = new Info(fp);

            fp.Aufnehmen(new Auto.Auto("VW", 2003));
            fp.Aufnehmen(new Auto.Auto("Audi", 2017));

            fp.Inventur();
            Console.WriteLine("Durchschnittliches Flottenalter: " + fp.BerechneFlottenalter());
            Console.ReadLine();
        }

        class Info
        {
            public Info(Auto.Fuhrpark fp)
            {
                fp.AddEvent += ausgabe;
            }

            public void ausgabe(Object sender, Auto.Fuhrpark.AddEventArgs args)
            {
                Auto.Auto a = args.auto;
                
                Console.WriteLine("Das Auto von " + a.hersteller + " aus dem Jahr " + a.baujahr + " wurde hinzugefügt.");
            }
        }
    }
}
