#include<iostream>
#define q 1.8
#include<math.h>
#include<string.h>
using namespace std;
int main(){
char b[100];
cin.getline(b,99);
int a,c,d,e,f;
a=strlen(b);
d=a-1;
f=0;
for(c=0;c<a;c++,d--){
if(b[c]!=b[d])
{
f=1;
break;
}
}
if(f==0)
cout<<"Pallindrome";
else 
cout<<"Nah";
}
