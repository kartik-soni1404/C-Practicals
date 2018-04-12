#include<iostream>
#define q 1.8
#include<math.h>
using namespace std;
int main(){
void  am(int []);
int a[100];
int b;

cout<<"Enter array  ";
for(b=0;b<5;b++){
cin>>a[b];
}

am(a);



}
void am(int x[]){
cout<<"\n";
int b,c,d,e,f,g,h;
for(b=0;b<5;b++){
for(c=b+1;c<5;c++)
if(x[b]>x[c])
{
d=x[b];
x[b]=x[c];
x[c]=d;
}
}
for(e=0;e<5;e++)
cout<<x[e]<<"  ";

}
