using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{

    public class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter the Stones: ");
            //int NumStones = int.Parse(Console.ReadLine());
            //string[] stones = new string[NumStones];
            string Stones = Console.ReadLine();
            int counter = 0;
            for (int i = 1; i < Stones.Length; i++)
            {
                if (Stones[i] == Stones[i - 1])
                {
                    counter+=1;
                }
            }
            Console.WriteLine(counter); 

        }
    }
}

