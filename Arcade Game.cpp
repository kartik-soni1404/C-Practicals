#include <stdio.h>
#include <list>
#include <iostream>
#include <vector>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{   int input ();
    void d1(int );
	char d;
	int w=0;
	time_t t;
	unsigned int seedval;
	seedval=(unsigned)time(&t);
	srand(seedval);
	int z,x;
	cout<<"Enter a number from 0 to 9 :";
	cin>>z;
	
	int k=0;
	bool a =true;
	do{
	x=(rand()%10);
	
	
	
	d1(x);
	cout<<"\n";	
	
	
	if(z==x)
	{k--;
	cout<<"\n"<<"Caught , wanna try more?? (Y or n)";
	cin>>d;
	
	w=d;
	if(w==89)
		z= input();
	else 
		break;
	}
	else
		k++;

	
	
	}while((k>=0));
	cout<<"Your score is "<<k;
	return 0;
}
void d1(int z){
	for(int a=0;a<=z;a++){
		cout<<"=>"<<" ";
	for (int i =0;i <100;i++)   {
    for (int x =0;x <500;x++)   {
    for (int y =0;y <500;y++);         
    }
	}
	}
	}
int input(){
	int z;
	cout<<"Enter a number from 0 to 9 :";
	cin>>z;
	
return z;
}
    