#include<iostream>
#include<math.h>
#include<string>
#include<stdio.h>
using namespace std;
void main() {
	int a[2][2] = {1,2,
					3,4	};
	int b[2][2] = { 2,2,
					3,19 };
	int c[2][2];
	int i, j, k, l;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2;j++) {
		
			c[i][j] = a[i][j] + b[i][j];
		
		}
	
	
	
	
	}
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++) {

			cout << c[i][j]<<"  ";

		}
		cout << "\n";



	}

	getchar();
}