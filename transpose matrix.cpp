#include<iostream>
#define q 1.8
#include<math.h>
using namespace std;
int main(){
int a[3][3]={1,2,3,
	     4,5,6,
	     7,8,9};


int i,j,k,l;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
cout<<a[i][j]<<"  ";

}
cout<<"\n";

}
int b[3][3];

cout<<"\n";
for(i=0;i<3;i++){
for(j=0;j<3;j++){
b[j][i]=a[i][j];

}
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
cout<<b[i][j]<<"  ";

}
cout<<"\n";


}
}
