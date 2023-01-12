#include<iostream>
#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
#include <algorithm>
using namespace std;


int main(void)
{

	cout << "enter your first string" << endl;
	string x;
	cin >> x;
	int u = 0;
	int l = 0;

	for (int i = 0;i < x.length();i++) {
		if (x[i]>='a'&&x[i]<='z')
		{
			l++;
		}
		else
			u++;
	}
	if (u > l) {
		std::transform(x.begin(), x.end(), x.begin(), ::toupper);
		cout << x << endl;
	}
	if (u < l||u==l)
	{
		std::transform(x.begin(), x.end(), x.begin(), ::tolower);
		cout << x << endl;

	}



}