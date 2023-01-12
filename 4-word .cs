using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace excercing
{
    
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("enter your string");
            string x=Console.ReadLine();
            int u = 0;
            int l = 0;
            for(int i=0; i<x.Length; i++)
            {
                if (x[i]>='a'&&x[i]<='z')
                {
                    l++; 
                }
                else
                    u++;
            }
            if (u > l)
            {
                Console.WriteLine(x.ToUpper());
            }
            if (u < l||u==l)
            {
                Console.WriteLine(x.ToLower());
            }
        
            

            



        }
        




    }

    
    


}
