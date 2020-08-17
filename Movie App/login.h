#include"User.h"
#define LSIZ 128
#define RSIZ 20



int check()
{
    char line[RSIZ][LSIZ];
    char x[30];
    char y[15];
    FILE *fptr = NULL;
    int i = 0,tot=0,cont=0,fl=-1;
    while(cont<3){
    printf("Enter Username:");
    gets(x);

    printf("Enter Password:");
    gets(y);
    strcat(x," ");
    strcat(x,y);
    strcat(x,"\n");


    char file[]="1.bin";
    fflush(fptr);
    fptr = fopen(file, "rb");
    rewind(fptr);

    while(fgets(line[i], LSIZ, fptr))
	{
        line[i][strlen(line[i])] = '\0';

        i++;
    }
    tot = i;

    for(i = 0; i < tot; ++i)
    {
        if((strcmp(x,line[i])==0))
        {


       welcome(line[i]);

        fl=0;break;

        }
    }
    if(fl){
    cont++;

    printf("Wrong credentials ! %d trials remaining\n",3-cont);
    }
    else
        break;
    }
fclose(fptr);

}
