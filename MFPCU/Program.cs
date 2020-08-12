using System;
using MFPCUCore;

namespace MIDI_File_Player_Converter_Utitlity
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("MIDI File Player Converter Utitlity\nBy Scott's Tech Logs 2020");
            Console.WriteLine("Getting File");
            double[] notes = MFPCUCore.API.notes(args[0]);
            Console.WriteLine("Copy the fllowing into the /MFP/MFP.ino where you see //Paste song data here");
        }
    }
}
