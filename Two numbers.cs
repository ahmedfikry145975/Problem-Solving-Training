using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    public class Program
    {
        public static int[] TwoSum(int[] nums, int target)
        {
            int[] result = new int[2];
            for (int i = 0; i < nums.Length; i++)
            {

                int x = nums[i];
                for (int j = i + 1; j < nums.Length; j++)
                {
                    if (x + nums[j] == target)
                    {
                        result[0] = i;
                        result[1] = j;
                        goto AfterLoop;

                    }
                }

            }
        AfterLoop:
            return result;


        }



        static void Main(string[] args)
        {
            int[] arr1 = { 2, 4, 11, 3 };
            int[] arr = TwoSum(arr1, 6);
            for (int i = 0; i < arr.Length; i++)
            {
                Console.WriteLine(arr[i]);
            }


        }
    }
}

