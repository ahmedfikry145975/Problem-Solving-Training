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
	/*sort(p,p+sizeof(*p)/sizeof(p[0]));*/
    
    int temp = 0;
    
    for (int i = 0;i < size;i++)
    {
        for (int j = 0;j < size;j++)
        {
            if (p[i] > p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
	int total{ 0 };
	for (int i = 0;i < size;i++) {
		total += p[i];
	}
	int serja{ 0 };
	int dima{ 0 };

	for (int i = 0;i < size;i+=2) {
		serja += p[i];
	}

	cout << "serja numbers is = " << serja << endl;
	cout << "dima numbers is = " << total - serja << endl;
	delete [] p;

}