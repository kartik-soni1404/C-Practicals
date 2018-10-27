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
    int row[10];
    int col[10];
	int code[10];//A code that uniquely stores both row and column number


};
user m[30];
void display(user u);
char Q;
char x='A';//Row number
int a=1;//Column number
fstream f,g;//Streams to files
void welcome();//To display the  welcome message
int menu(user &x);//Menu for booking
int screen(user &j);//Display screen along with seats
void check(user &f);//To check for valid responses
int display(int J);

int main()
{
f.open("Output1.txt",ios::out|ios::in|ios::app);//To connect to the file

clrscr();

user x[30];//Creating an array of 30 users
welcome();
int i=0;
char a='Y';
do{
menu(x[i]);
screen(x[i]);
i++;
cout<<"\nContinue booking?";//Infinite menu driven program 
cin>>a;
if(a=='y'||a=='Y')
    clrscr();
}while(a=='y'||a=='Y');


f.close();
getch();
return 0;
}
//For heading display
void welcome(){
    cout<<"\t \t"<<"********************************************"<<"\n";
    cout<<"\t \t"<<"**********"<<"Welcome to Book My show"<<"********** \n";
    cout<<"\t \t"<<"********************************************"<<"\n";
}
int  menu(user &y){
//Main menu for the program 
n:	{
	cout<<"Enter name =>";
	gets(y.name);//User inputs his name
	cout<<"\n";
	}
		if(strcmp(y.name,"")==0)//Check whether the name is valid
			{	cout<<"Please enter valid name!!!\n";
				goto n;//If name is invalid again take it from the user until he enters a valid one
			}
loc:
	{
	cout<<"Select location: ";
	cout<<"\n1.Sarjapur \n2.Whitfield \n3.Lal Bagh \n4.Hoskote";
	cout<<"\nYour response :=>";
	cin>>y.location;//User inputs his locations
	}
		if(y.location>4)
		{	
		cout<<"\nPlease enter valid location!!!\n";
		goto loc;//If location is invalid again take it from the user until he enters a valid one
		}
mov:
	{
	cout<<"\n";
	cout<<"Select movie ";
	cout<<"\n1.Johny English Reborn \n2.Venom \n3.Snake \n4.Poison";
	cout<<"\nYour response :=>";
	cin>>y.movie;//User inputs his movie
	cout<<"\n";
	}
		if(y.movie>4)
		{
			cout<<"\nPlease enter valid movie!!!\n";
			goto mov;//If movie is invalid again take it from the user until he enters a valid one
		}
	cout<<"\nSelect number of seats ";
	cout<<"\nYour response :=>";
	cin>>y.qty;
	cout<<"\n";

	return 0;
}
int screen(user &y){
int k=y.qty;//No of seats

cout<<"\t ==========SCREEN========== \n"	;
//To display the seats
for(int i =0 ;i<5;i++)
	{	
	cout<<"\t";
	if(i>0)
		cout<<x++<<"  ";
	else
		cout<<"    ";
		for(int k=0;k<5;k++)
			{
				if(i==0)
					cout<<"  "<<a++<<"  ";
				else{
				if((display((((1000*y.movie)+100*y.location)+(10*i)+k+1)))==1)
					cout<<"  "<<" # ";
				
				
				else
					cout<<"  "<<" * ";
			}}
	cout<<"\n";
	}
x='A';//To display the row number
a=1;//To display the column number

seats:
cout<<"Enter seat no. [Row,Col]";
for(int s=0;s<y.qty;s++)
{
	cout<<"\nYour response for seat no." << s+1<<" :=>";
	cin>>Q>>y.col[s];//User inputs his seat number
	y.row[s]=Q-65;//Converting from char to int 
	y.code[s]=(10*(y.row[s]+1))+y.col[s];//A code that uniquely stores both row and column number
		if(Q>'D'||y.col[s]>5)
		{
			cout<<"\nPlease enter valid seat no.s!!!";
			continue;//If seat is invalid again take it from the user until he enters a valid one
		}
}

char e;//User ans choice
//Confirming from the user to book
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
//Users location
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
//Seat numbers

for(int u=0;u<m;u++)
	cout<<"Seat number "<<u+1<<":" <<char(y.row[u]+65)<<y.col[u]<<"\n";
cout<<"\nYour response :=>";
cin>>e;

user l;
if(e=='y'||e=='Y')
	//Writing output to the file
	
	
	for(int V=0;V<y.qty;V++)
	{f.clear();
	f.seekg(0);
	int k=0;
	while(!f.eof()){
		
		f>>k;
		
		if(k!=0)
		{
		if((((1000*y.movie)+100*y.location)+y.code[V])==k)	
		{	cout<<"\nPlease choose another one !!\n";
		return 1;
		
		}
		}
		k=0;		
		
	}
	f.clear();
	f<<(((1000*y.movie)+100*y.location)+y.code[V]);
	f<<"  ";}
	
	return 0;
}
int display(int J){
	f.clear();
	f.seekg(0);
	int k=0;
	while(!f.eof()){
		
		f>>k;
		
		if(k!=0)
		{
		if(J==k)	
			return 1;
		}
		k=0;		
		
	}
	
	
	return 0;
}
