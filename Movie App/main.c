#include"basic.h"
#include"login.h"
#include"signup.h"

int main(void)
{
    int c;
    char ans='y';
    while(ans=='y'){

    printf("1>To Login\n2>To Signup\nEnter choice:");
    c=getchar();
    fflush(stdin);
    switch(c){
    case '1':

        check();

    break;
    case '2':

    signup();
    break;
    }
    printf("Do you wish to continue?(y or n)");
    fflush(stdin);
    ans=getchar();
    fflush(stdin);
    }
    return 0;
}
