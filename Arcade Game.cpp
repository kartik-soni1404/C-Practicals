#include <stdio.h>

#include <iostream.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>



int main()
{  clrscr();
	 int input ();
    void d1(int );
	char d;
	int w=0;
	time_t t;
	int q=0;
	unsigned int seedval;
	seedval=(unsigned)time(&t);
	srand(seedval);
	int z,x;
	cout<<"Enter a number from 0 to 9 :";
	cin>>z;
	
	int k=0;
	int a;
	 a =0;
	do{
	x=(rand()%10);
	
	q++;	
	
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
		++k;

	
	
	}while((k>=0));
	cout<<"Your score is "<<k+(1*q);
	getchar();
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
