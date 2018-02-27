#include<iostream>
#define q 1.8
using namespace std;
int main(){
int a,i,j;
cout<<"Enter the number";
cin>>a;
j=1;
int k=0;
for(i=1;i<=a;i++)
{
if (a%i==0)

	{
k++;

}

}
if (k==2)
cout<<"It is prime";
else 
cout<<"Nope";
}

