#include<iostream>
#define q 1.8
using namespace std;
int main(){
int a,b,c,i,j,k,l;
cout<<"Enter the number";
cin>>k;


int  f,d;
a=1;
b=1;
c=0;
cout<<a<<"  "<<b<<"  ";

for(i=1;i<k-1;i++)
{

c=b+a;
a=b;
b=c;
cout<<c<<" ";

}

}
