using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    public class Program
    {
        public static bool IsAnagram(string s, string t)
        {
            bool flag = true;

            if (s.Length != t.Length)
            {
                flag = false;
                return flag;
            }
            if (s == null || t == null)
            {
                flag = false;
                return flag;

            }
            char[] firstCharsArray = s.ToLower().ToCharArray();
            char[] secondCharsArray = t.ToLower().ToCharArray();
            Array.Sort(firstCharsArray);
            Array.Sort(secondCharsArray);
            for (int i = 0; i < s.Length; i++)
            {
                if (firstCharsArray[i].ToString() != secondCharsArray[i].ToString())
                {
                    flag = false;
                    break;

                }


            }
            return flag;

        }
        static void Main(string[] args)
        {
            Console.WriteLine(IsAnagram("ab", "a"));

        }
    }
}

