#include<iostream>
#define q 1.8
#include<math.h>
#include<string.h>
#include<stdio.h>
using namespace std;
struct emp{
int code;
char name[100];
int units;
float bill;
};

emp wo[5];
int main(){
void input(emp []);
input (wo);
int a,i;
cout<<"\n Enter code";
cin>>a;
for(i=0;i<2;i++){
if (wo[i].code==a)
{

cout<<"\n Units consumed   is "<<wo[i].units;
cout<<"\n The bill is "<<wo[i].bill;


}
}


}
void input(emp wo[]){
int a,i,k;

for(i=0;i<2;i++){
cout<<"Enter code";
cin>>wo[i].code;


cout<<"\n Enter units";
cin>>wo[i].units;
if (wo[i].units<=100){
wo[i].bill=wo[i].units*0.8 ;
}
else if (wo[i].units>100 && wo[i].units<=300){
wo[i].bill=((wo[i].units-100)*1.2)+80 ;
}
else if (wo[i].units>300 && wo[i].units<=600){
wo[i].bill=((wo[i].units-300)*2)+80+240 ;
}
else if (wo[i].units>600 && wo[i].units<=1000){
wo[i].bill=((wo[i].units-600)*3)+80+240+600 ;
}
else if (wo[i].units>1000){
wo[i].bill=((wo[i].units-1000)*4)+80+240+600+1200 ;
}
}


}
