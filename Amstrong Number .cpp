#include<iostream>
#define q 1.8
#include<math.h>
using namespace std;
int main(){
int am(int);
int a,b;
cout<<"Enter a ";
cin>>a;
b=am(a);
if(a==b)
cout<<"Amstrong number ";
else 
cout<<"nope";



}
int am(int a ){
int i,j,k,l,m;
j=a;
k=0;
while(j>0){
k++;
j=j/10;
}
l=0;
while(a>0)
{
m=a%10;
l=l+pow(m,k);
a=a/10;

}

return l;
}
