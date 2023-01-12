#include<iostream>
#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
#include <algorithm>
using namespace std;


int main(void)
{
	cout << "enter size of array";
	int size;
	cin >> size;
	int* p;
	try {
		p = new int[size];
	}
	catch (bad_alloc ex) {
		cout << "allocation failure" << endl;
		return EXIT_FAILURE;
	}


	for (int i = 0;i < size;i++) {
		cout << "enter element" << i + 1 << endl;
		cin >> p[i];
	}
	//sort(p,p+sizeof(*p)/sizeof(p[0]));

	int start = 0, end = size-1, PlayerOne = 0, PlayerTwo = 0, Value = 0, Player = 0;
	while (start<=end)
	{
		if (p[start] >= p[end]) {
			Value = p[start];
			start++;
		}
		else {
			Value = p[end];
			end--;

		}
		if (Player % 2 == 0) {
			PlayerOne += Value;
			Player++;
		}
		else {
			PlayerTwo += Value;
			Player++;
		}


	}
	cout << "Serja count is: " << PlayerOne << endl;
	cout << "dima count is: " << PlayerTwo << endl;

	//int start = 0, end = size - 1, r1 = 0, r2 = 0, value = 0, play = 0;
	//while (start <= end) {
	//	if (p[start] >= p[end]) {
	//		value = p[start];
	//		start++;
	//	}
	//	else {
	//		value = p[end];
	//		end--;
	//	}
	//	if (play % 2 == 0) {
	//		r1 += value;
	//	}
	//	else {
	//		r2 += value;
	//	}
	//	play++;

	//}

	//cout << r1 << " " << r2 << endl;


	delete[] p;

}