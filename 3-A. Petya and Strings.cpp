#include<iostream>
#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;

int main(void)
{
	cout << "enter your first string" << endl;
	string x;
	cin >> x;
	cout << "enter your second string" << endl;
	string y;
	cin >> y;
	int z = 0;
	for (int i = 0;i <x.length();i++) {
		z = tolower(x[i]) - tolower(y[i]);
	}
	if (z > 0) {
		cout << "1" << endl;
	}
	if(z==0)
	{
		cout << "0" << endl;
	}
	if (z < 0) {
		cout << "-1" << endl;
	}

}