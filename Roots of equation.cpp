#include<iostream>
#define q 1.8
#include<math.h>
using namespace std;
int main(){
double a,b,c,d,e,f,g,h;
cout<<"Enter a ,b,c";
cin>>a>>b>>c;
d=b*b-4*a*c;
if (d>=0)
{
d=pow(d,0.5);
if (d==0)
cout<<"\n Roots are real and equal";
else
cout<<"\n  Roots are unequal and real";
f=((-b)+d)/(2*a);
g=((-b)-d)/(2*a);
cout<<"\n Roots are "<<f<<g;
}
else 
cout<<"Roots not real";

}
