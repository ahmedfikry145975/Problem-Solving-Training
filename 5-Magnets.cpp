#include<iostream>
#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
#include <algorithm>
using namespace std;


int main(void)
{

	cout << "enter your num of magnets" << endl;
	int size;
	cin >> size;

	string value;
	string tempvalue;
	int counter{};
	for (int i = 0;i < size;i++) 
	{
		cout << "enter your valu no " << i + 1 <<" ";
		cin >> value;
		if (i == 0) {
			tempvalue = value;
			continue;
		}
		if (tempvalue[1] != value[0]) {

			counter++;

		}
		tempvalue = value;

	}
	cout << "number of magnets = " << counter;

}