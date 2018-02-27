#include<iostream>
#define q 1.8
#include<math.h>
using namespace std;
int main(){
int reverse(int);
int a,b;
cout<<"Enter a ";
cin>>a;
b=reverse(a);
if(a==b)
cout<<"Pallindrome";
else 
cout<<"nope";



}
int reverse(int a){
int b,c,d,e,f,g,h;
int i,j,k;
d=0;
while(a>0){
c=a%10;
d=(10*d)+c;

a=a/10;
}

return d;

}
