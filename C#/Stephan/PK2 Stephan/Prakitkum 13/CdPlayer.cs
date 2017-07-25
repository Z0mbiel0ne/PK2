using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prakitkum_13
{
    class CdPlayer
    {
        public void Start()
        {
            Console.WriteLine("CD-Player startet.");
        }

        public void Stop()
        {
            Console.WriteLine("CD-Player stoppt.");
        }
    }

    class CdStart : Command
    {
        private CdPlayer player;

        public CdStart(CdPlayer player)
        {
            this.player = player;
        }

        public override void Execute()
        {
            player.Start();
        }
    }

    class CdStop : Command
    {
        private CdPlayer player;

        public CdStop(CdPlayer player)
        {
            this.player = player;
        }

        public override void Execute()
        {
            player.Stop();
        }
    }
}
