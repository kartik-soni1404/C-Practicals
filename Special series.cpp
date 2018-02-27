#include<iostream>
#define q 1.8
#include<math.h>
using namespace std;
int main(){
double am(int,int);
int a;
double b;
cout<<"Enter x and n ";
cin>>a>>b;
b=am(a,b);
cout<<b;

}
double am(int x,int n ){
double b,c,d,e,f,g,h;
b=0;
int a;
for(a=0;a<n;a++){
c=pow(x,3*a);
c=(a%2==0)?c:-c;
d=3*a;
e=1;
while(d>0)
{
e=e*d;
d--;

}
f=c/e;
b=b+f;

}


return  b;
}
