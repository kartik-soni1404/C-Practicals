#include<iostream>
#include<math.h>
#include<string>
using namespace std;
void main() {
	int a[5][5];
	int i, j, k;
	for (i = 0; i < 2; i++)
	{
		for (j=0;j<2;j++) 
		{
			cin >> a[i][j];
		
		}
	}
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j<2; j++)
		{
			cout<< a[i][j]<<"  ";

		}
		cout << "\n";
	}

	
	
	
	
	
	
	getchar();
}