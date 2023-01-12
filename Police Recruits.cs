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
            Console.WriteLine("Enter no of Events: ");
            int events = int.Parse(Console.ReadLine());
            int[] arr = new int[events];
            for (int i = 0; i < events; i++)
            {
                Console.WriteLine("enter event type");
                arr[i] = int.Parse(Console.ReadLine());
            }
            int counter = 0;
            int sum = 0;
            for (int i = events-1; i >= 0; i--)
            {
                if (arr[i] < 1)
                {
                    counter++;
                }
                if (arr[i] <= 10 && counter > 0)
                {
                    sum+=arr[i];
                }
            }
            Console.WriteLine("value is " + Math.Abs(sum));
        }
    }
}

