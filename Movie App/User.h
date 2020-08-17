#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include"act1.h"
#include"Review.h"
#include"Cancel.h"
void welcome(char *p){
    p=strtok(p," ");
    printf("Hello %s\n",p);
    ok:
    printf("Do you wish to:\n1>Book\n2>Review\n3>Cancel\n4>Exit\nYour choice:");
   int k;
   scanf("%d",&k);
   switch(k){
   case 1:fflush(stdin);
       act1(p);
       break;
    case 2:fflush(stdin);
       r1(p);
       break;

   case 3:fflush(stdin);
       cancel(p);
       break;
   default:
    return;
   }
    goto ok;


}

#endif // USER_H_INCLUDED
