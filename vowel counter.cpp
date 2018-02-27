#include<iostream>
#include<math.h>
#include<string>
using namespace std;
void main() {
	char a[20];
	cin.getline(a, 20);
	int b, c, d, e;
	d = 0;
	b = strlen(a);
	for (c = 0; c < b; c++) {
		switch (tolower(a[c]))
		{
		case'a':
		case'o':
		case'i':
		case'e':
		case'u':d++;




		}

	
	}



	cout << "\n The no. of vowels are" << d;

	getchar();
}