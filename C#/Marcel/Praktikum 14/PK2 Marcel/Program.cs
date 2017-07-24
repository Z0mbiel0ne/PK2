using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PK2_Marcel
{
    public class Program
    {
        class Fuhrpark
        {
            public LinkedList<Auto> fuhrpark = new LinkedList<Auto>();

            void Aufnehmen(Auto a)
            {
                fuhrpark.Add(a);
            }

            void Inventur()
            {

            }

            double BerechneFlottenalter()
            {
                return 0.0;
            }
        }
        class Auto
        {
            public String hersteller
            {
                get
                {
                    return hersteller;
                }

                set
                {
                    hersteller = value;
                }
            }
            public int baujahr { get; set; }
        }

        interface Iterator
        {
            int HashNext();
            int Next();
        }

        LinkedList<int> mains = new LinkedList<int>();
        static void Main(string[] args)
        {
           
        }

        public class LinkedList<T>
        {
            public Link<T> kopf;
            public Link<T> start;

            public LinkedList()
            {

                kopf = new Link<T>();
                start = kopf;

            }
            public void Add(T a)
            {
                Link<T> newData = new Link<T>(a, null, kopf);
                kopf = newData;
            }

            public void Remove(int i)
            {
                Link<T> nav = start;
                for(int x = 0; x <i; i++)
                {
                    nav = nav.next;
                }
            }

            class ListIterator : Iterator
            {
                public int HashNext() { return 0; }
                public int Next() { return 0;}
            }

            public class Link<T>
            {
                public T data { get; set; }
                public Link<T> next { get; set; }
                public Link<T> before { get; set; }

                public Link(T newIn, Link<T> newNext, Link<T> newBefore)
                {
                    data = newIn;
                    next = newNext;
                    before = newBefore;
                }
                public Link()
                {
                    data = default(T);
                    next = null;
                    before = null;
                }
            }
        }
    }
}
