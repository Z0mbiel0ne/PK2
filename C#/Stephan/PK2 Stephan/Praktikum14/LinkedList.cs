using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Praktikum14
{
    namespace LinkedList
    {
        class LinkedList<T>
        {
            private Element<T> first;
            private Element<T> last;

            public void Add(T value)
            {
                Element<T> next = new Element<T>(value, null);
                if (last == null)
                {
                    first = next;
                    last = next;
                }
                else
                {
                    last.next = next;
                    last = next;
                }
            }

            public Iterator<T> Iterator()
            {
                return new ListIterator<T>(first);
            }

            public void Remove(int i)
            {
                int pos = 0;
                Element<T> akt = first;
                while (pos < i - 1 && akt.next != null)
                {
                    pos++;
                    akt = akt.next;
                }
                if (pos != i - 1)
                {
                    return;
                }
                if (akt.next != null)
                {
                    akt.next = akt.next.next;
                }
            }

            class ListIterator<E> : Iterator<E>
            {

                private Element<E> first;
                private Element<E> akt;

                public ListIterator(Element<E> cfirst)
                {
                    Element<E> akt = cfirst;
                    Element<E> cakt = new Element<E>(akt.value, null);
                    first = cakt;
                    while (akt != null)
                    {
                        akt = akt.next;
                        if (akt != null)
                        {
                            cakt.next = new Element<E>(akt.value, null);
                            cakt = cakt.next;
                        }
                    }
                }

                public Boolean HasNext()
                {
                    if (akt == null)
                    {
                        return true;
                    }
                    return akt.next != null;
                }

                public E Next()
                {
                    if (HasNext())
                    {
                        if (akt == null)
                        {
                            akt = first;
                        }
                        else
                        {
                            akt = akt.next;
                        }

                        return akt.value;
                    }
                    else
                    {
                        return default(E);
                    }
                }
            }

            class Element<E>
            {
                public Element<E> next { get; set; }
                public E value { get; }

                public Element(E value, Element<E> next)
                {
                    this.value = value;
                    this.next = next;
                }
            }
        }

        interface Iterator<T>
        {
            Boolean HasNext();
            T Next();
        }

    }
}
