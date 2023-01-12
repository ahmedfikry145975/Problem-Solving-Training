#include<iostream>
#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;

int main(void)
{
    nt size;
    cout << "enter size of columns of the box" << endl;

    cin >> size;
    int p[4];
    //int* p = new int[size];
    for (int i = 0;i < 4;i++) {
        cin >> p[i];
    }
    //sort(p, p + 4);
    void sortarray(p)
    {
            
            for (int i = 0;i < 4;i++)
            {
                bool flag = false;
                for (int i = 0;i < 4;i++) {
                    if (p[i] > p[i + 1]) {
                        
                        int temp;
                        temp = p[i];
                        p[i] = p[i+1];
                        p[i+1] = temp;
                    }
                }
                if (!flag) break;
        
            }
    }
  
    for (int i = 0;i < 4;i++)
    {
        cout << p[i] << " ";
    }

}
//need alot of revision for dynamic allocation and how to allocate arrays 
// need more understanding for the basic topics related to arrays