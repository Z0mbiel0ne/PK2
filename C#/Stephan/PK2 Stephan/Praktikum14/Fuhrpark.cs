using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Praktikum14
{
    namespace Auto
    {
        class Auto
        {
            public String hersteller { get; set; }
            public int baujahr { get; set; }

            public Auto(String hersteller, int baujahr)
            {
                this.hersteller = hersteller;
                this.baujahr = baujahr;
            }
        }

        class Fuhrpark
        {
            private Praktikum14.LinkedList.LinkedList<Auto> autos = new Praktikum14.LinkedList.LinkedList<Auto>();

            public delegate void AddHandler(object obj, AddEventArgs args);

            public event AddHandler AddEvent;

            public void Aufnehmen(Auto a)
            {
                autos.Add(a);
                if (AddEvent != null)
                {
                    AddEvent(this, new AddEventArgs(this, a));
                }
            }

            public void Inventur()
            {
                LinkedList.Iterator<Auto> it = autos.Iterator();
                while (it.HasNext())
                {
                    Auto a = it.Next();
                    Console.WriteLine("Auto von " + a.hersteller + " aus dem Jahr " + a.baujahr);
                }
            }

            public double BerechneFlottenalter()
            {
                int jahr = 2017;
                int summe = 0;
                int anzahl = 0;

                LinkedList.Iterator<Auto> it = autos.Iterator();
                while (it.HasNext())
                {
                    Auto a = it.Next();
                    summe += jahr - a.baujahr;
                    anzahl++;
                }
                return (double)summe / anzahl;
            }

            public class AddEventArgs : EventArgs
            {
                public Fuhrpark fuhrpark { get; }
                public Auto auto { get; }

                public AddEventArgs(Fuhrpark f, Auto a)
                {
                    this.fuhrpark = f;
                    this.auto = a;
                }
            }
        }
    }
}
