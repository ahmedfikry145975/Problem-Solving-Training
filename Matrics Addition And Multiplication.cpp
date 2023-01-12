#include<iostream>
#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
#include <algorithm>
using namespace std;


int main(void)
{
	
	cout << "enter size of matrix rows & columns" << endl;
	int row1 = 0, col1 = 0, row2 = 0,col2=0;
	cin >> row1;
	cin >> col1;
	int** m1 = new int*[row1];
	int** m2 = new int*[row2];
	
	cout << "enter values of first matrix" << endl;
	for (int i = 0;i < row1;i++) {
		cout << "enter row num" << i + 1 << endl;
		m1[i] = new int[col1];
		for (int j = 0;j < col1;j++) {
			cin >> m1[i][j];
		}
	}

	cout << "enter size of second matrix" << endl;
	cin >> row2;
	cin >> col2;
	for (int i = 0;i < row2;i++) {
		cout << "enter row num" << i + 1 << endl;
		m2[i] = new int[col2];
		for (int j = 0;j < col2;j++) {
			cin >> m2[i][j];
		}
	}

	for (int i = 0;i < col1;i++) {
		for (int j = 0;j < row1;j++) {
			cout << m1[i][j] + m2[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0;i < row1;i++) {
		delete[] m1[i];
	}
	for (int i = 0;i < row2;i++) {
		delete[] m2[i];
	}

	delete [] m1;
	delete[] m2;


}