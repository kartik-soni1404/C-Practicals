#include<iostream>
#define q 1.8
#include<math.h>
using namespace std;
int main(){
int a,b,c,d,e,f,g,h;
cout<<"Enter a ";
cin>>a;
int i,j,k;
d=0;
while(a>0){
c=a%10;
d=d+c;

a=a/10;
}
cout<<"The sum is "<<d;

}
