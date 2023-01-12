#include<iostream>
#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;

int main(void)
{
    int x;
    for (int i = 1;i <= 5;i++) {
        for (int j = 1;j <= 5;j++) {
            cin >> x;
            if (x == 1) {
                cout<<(abs(3 - i) + abs(3 - j));
                break;
            }
        }
    }

}