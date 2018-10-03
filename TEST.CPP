#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
class user{
public:
    char name[80];
    int location;
    int movie;
    int qty;//No of seats
    char row[10];
    int col[10];


};
user m[30];
char x='A';
int a=1;
fstream f,g;
void welcome();//To display the  welcome message
int menu(user &x);//Menu for booking
int screen(user &j);//Display screen along with seats
void check(user &f);//To check for valid responses
int  conflict(user &f);//To check for clashes in seats
void display ();
int main()
{
f.open("Test111.txt",ios::out);
clrscr();
user x[30];//Creating an array of 30 users
welcome();
int i=0;
char a='Y';
do{
menu(x[i]);
screen(x[i]);
i++;
cout<<"\n Continue booking?";//Infinite menu driven program 
cin>>a;
if(a=='y'||a=='Y')
    clrscr();
}while(a=='y'||a=='Y');

for(int k=0;k<=i;k++)
	cout<<m[k].name;
f.close();
return 0;
}

void welcome(){
    cout<<"\t \t"<<"********************************************"<<"\n";
    cout<<"\t \t"<<"**********"<<"Welcome to Book My show"<<"********** \n";
    cout<<"\t \t"<<"********************************************"<<"\n";
}
int  menu(user &y){
cout<<"Enter name =>";

gets(y.name);
cout<<"\n";
cout<<"Select location: ";
cout<<"\n1.Sarjapur \n2.Whitfield \n3.Lal Bagh \n4.Hoskote";
cout<<"\nYour response :=>";
cin>>y.location;
cout<<"\n";
cout<<"Select movie ";
cout<<"\n1.Johny English Reborn \n2.Venom \n3.Snake \n4.Poison";
cout<<"\nYour response :=>";
cin>>y.movie;
cout<<"\n";
cout<<"\nSelect number of seats ";
cout<<"\nYour response :=>";
cin>>y.qty;
cout<<"\n";

return 0;
}
int screen(user &y){
int k=y.qty;
cout<<k;
cout<<"\t ==========SCREEN========== \n"	;

for(int i =0 ;i<5;i++)
{	cout<<"\t";
	if(i>0)
	cout<<x++<<"  ";
	else
	cout<<"    ";
	for(int k=0;k<5;k++){
	if(i==0)
		cout<<"  "<<a++<<"  ";
	else
	cout<<"  "<<" * ";}
cout<<"\n";
}
x='A';
a=1;
cout<<"Enter seat no. [Row,Col]";
while(k>0)
{cout<<"\nYour response for seat no." << y.qty -k+1<<" :=>";
cin>>y.row[y.qty-k]>>y.col[y.qty-k];
k--;
}
char e;
cout<<"\nDo you wist to book using the following details ?\n\n";
cout<<"Name :"<<y.name;
cout<<"\n";
cout<<"Movie name:";
switch(y.movie){
case 1:cout<<"Johny English Reborn \n";
break;
case 2:cout<<"Venom \n";
break;
case 3:cout<<"Snake \n";
break;
case 4:cout<<"Poison\n";
break;	
	
};

cout<<"Location :";
switch(y.location){
case 1:cout<<"Sarjapur\n";
break;
case 2:cout<<"Whitfield \n";
break;
case 3:cout<<"Lal Bagh \n";
break;
case 4:cout<<"Hoskote\n";
break;	
	
};
int m= y.qty;
for(int u=0;u<m;u++)
	cout<<"Seat number "<<u+1<<":" <<y.row[u]<<y.col[u]<<"\n";
cout<<"\nYour response :=>";
cin>>e;

user l;
if(e=='y'||e=='Y')

	f.write((char*)&y,sizeof(y));
	return 0;
}
int  conflict (user &y){
	
	int q=0;
	f.seekg(ios::beg);
	while(!f.eof()){
		f.read((char*)&m[q],sizeof(m[q]));
		q++;
	}
	
	return 1;
}


