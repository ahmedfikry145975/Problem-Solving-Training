#include<iostream>
#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
#include <algorithm>
using namespace std;


int main(void)
{
	
	int stones = 0;
	cout << "enter num of stones" << endl;
	cin >> stones;

	char* p; 
	try {
		p = new char[stones];
	}
	catch (bad_alloc ex) {
		cout << "allocation failure" << endl;
		return EXIT_FAILURE;
	}
	
	int i = 0;

	cout << "enter color of stones" << endl;
	while (i < stones) {
		cin >> p[i];
		i++;
	}
	int counter = 0;
	for (int i = 0;i < stones;i++) {

		if (p[i] == p[i + 1]) {
			counter++;
		}

	}

	cout << counter << endl;


	delete []p;

}