#include<iostream>
#define q 1.8
using namespace std;
int main(){
int a;
cout<<"Enter the number";
cin>>a;
int i,j,k,l;
j=k=0;
for(i=0;i<a+1;i=i+2)
j=j+i;

for(i=1;i<a+1;i=i+2)
k=k+i;
cout<<"\n Sum  of even is"<<j<<"\n Sum of odd is "<<k;
}

