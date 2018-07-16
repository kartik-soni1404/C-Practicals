#include <iostream>
#include<iomanip>
#include<string>
#include<string.h>
#include<cstdio>
#include<fstream>
using namespace std;


int main (){
fstream f;
char c[100];
char k='c';
f.open("Testing.txt",ios::out|ios::in);
f.put('H');
f.get(k);
f<<"Hello";
f>>k;
cout<<k;
f.getline(c,2,'.');

f.close();
f.open("Testing.txt",ios::trunc);
if(!f)
    cout<<"Empty file";
f.close();
return 0;
}
