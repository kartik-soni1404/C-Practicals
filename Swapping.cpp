#include<iostream>
#define q 1.8
using namespace std;
int main(){
int a,b;
cout<<"Enter the number";
cin>>a>>b;
//With using a variable 
int c;
c=b;
b=a;
a=c;
cout<<"The numbers are "<<a<<"  "<<b;
//without using a third variable
int x,y;
cout<<"Enter the number";
cin>>x>>y;
x=x+y;
y=x-y;
x=x-y;
cout<<"The numbers are "<<x<<"   "<<y;

}

