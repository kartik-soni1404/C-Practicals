#include <iostream>
#include<stdio.h>
using namespace std;


int main()
{
int A[]={1,2,3,3,5};

int C[5];


int i;
for(i=0;i<5;i++)
    C[i]=0;
for(i=0;i<5;i++)
    C[A[i]]++;
for(i=0;i<5;i++)
    if(C[i]>1){
        cout<<"\nItem "<<i<<" No. if times:"<<C[i];

    }
}
