#include<iostream>
#include<math.h>
#include<string>
using namespace std;
void main() {
	char a[20];
	char x[20];
	cin.getline(a, 20);
	int b, c, d, e,i;
	d = 0;
	b = strlen(a);
	
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ') {
			x[d] = a[i];
			d++;
				}
		else {
					while (d > 0) {
				cout <<x[--d];
					}
					
		}
		
	
	}
		getchar();
}