#include <iostream>
#include<iomanip>
#include<string>
#include<string.h>
#include<cstdio>
#include<fstream>
using namespace std;
class xyz{
char x;
int y;
public:
int k;
};
int main (){
xyz obj;
fstream f;
f.open("Test.dat",ios::out|ios::binary);
f.write((char*)&obj,sizeof(obj));
f.close();
return 0;
}
