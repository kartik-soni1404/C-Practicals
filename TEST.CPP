#include <iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>

void welcome();
void cd(int &x, int &y,int & a,int &b);
void welcome(){
cout<<"\t \t"<<"********************************************"<<"\n";
cout<<"\t \t"<<"**********"<<"Welcome to Book My show"<<"********** \n";
cout<<"\t \t"<<"********************************************"<<"\n";
}
void cd(int &x, int &y,int & a,int &b){

cout<<"\n Choose movie:\n  1>>Movie 1 2>>Movie 2 \n Your response :";
cin>>x;
cout<<"\n Select time 1>>9:00-12:00 2>>1:00-4:00 3>>5:00-8:00 \n Your response :";
cin>>y;
cout<<"\t \t =============SCREEN=============";

}
struct movie{
int mo;
int time;
int r;
int c;
};
int main()
{   fstream f;
    f.open("Test.txt",ios::in|ios::out);
    movie x[100];
    char ans;
    ans='Y';
    welcome();
    int i=0;
    do
    {
    cd(x[i].mo,x[i].time,x[i].r,x[i].c);
    cout<<"\n\n Do you wish to book more?";
    cin>>ans;
    if(ans=='y'||ans=='Y')
	clrscr();
    i++;
    }    while(ans=='y'||ans=='Y');
    f.close();
    return 0;
}

