using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Runtime.Serialization;

namespace ConsoleApp1
{
 


    public class Program
    {
       

        static void Main()
        {
            Console.WriteLine("enter size of array");

            int size = int.Parse(Console.ReadLine());
            int[] arr = new int[size]; 

            for(int i = 0; i < size; i++)
            {
                arr[i] = int.Parse(Console.ReadLine());
            }

            int start = 0;
            int end = size-1;
            int r1=0, r2=0,play=0;
            int max = 0;
            while(start <= end)
            {
                if (arr[start] > arr[end])
                {
                    max = arr[start];
                    start++;
                }
                else
                {
                    max =arr[end];
                    end--;
                }

                if (play % 2 == 0)
                {
                    r1 += max;

                }
                else if (play % 2 != 0)
                {
                    r2 += max;
                }
                play++;
            }

            Console.WriteLine($"r1= {r1} , r2= {r2}");
            


           
        }
           


    }
   
   
  
}

