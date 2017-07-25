using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prakitkum_13
{
    class RemoteControl
    {
        private ArrayList list;

        public struct Control
        {
            public int i { get; set; }
            public Command on { get; set; }
            public Command off { get; set; }

            public Control(int i, Command on, Command off)
            {
                this.i = i;
                this.on = on;
                this.off = off;
            }
        }

        public RemoteControl()
        {
            list = new ArrayList();
        }

        public void SetCommand(int i, Command on, Command off)
        {
            list.Add(new Control(i, on, off));
        }

        public void PressOn(int i)
        {
            foreach (Control c in list)
            {
                if (c.i == i)
                {
                    c.on.Execute();
                }
            }
        }

        public void PressOff(int i)
        {
            foreach (Control c in list)
            {
                if (c.i == i)
                {
                    c.off.Execute();
                }
            }
        }
    }
}
