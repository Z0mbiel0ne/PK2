using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prakitkum_13
{
    class Program
    {
        static void Main(string[] args)
        {
            RemoteControl remoteControl = new RemoteControl();

            CdPlayer cdPlayer = new CdPlayer();
            CdStart cdStart = new CdStart(cdPlayer);
            CdStop cdStop = new CdStop(cdPlayer);

            GaragenTor garagenTor = new GaragenTor();
            GaragenOeffner garageOeffner = new GaragenOeffner(garagenTor);
            GaragenSchliesser garagenSchliesser = new GaragenSchliesser(garagenTor);

            remoteControl.SetCommand(0, cdStart, cdStop);
            remoteControl.SetCommand(1, garageOeffner, garagenSchliesser);

            remoteControl.PressOn(1);
            remoteControl.PressOn(0);
            remoteControl.PressOff(0);
            remoteControl.PressOff(1);
            Console.ReadLine();
        }
    }
}
