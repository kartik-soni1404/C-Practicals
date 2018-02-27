#include<iostream>
#define q 1.8
using namespace std;
int main(){
int a;

double b,c,d,f;
cout<<"Covert from 1>celsius 2>fahrenheit";
cin>>a;
switch(a){
case 1:
cout<<"Enter Celsius";
cin>>b;
c=(q*b)+32;
cout<<"Fahrenheit is "<<c;
break;
case 2:
cout<<"Enter Fahrenheit";
cin>>b;
c=(b-32)*(q);
cout<<"Celsius is "<<c;
break;

default:cout<<"Wrong option";
break;
}
}
