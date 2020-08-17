#ifndef ACT1_H_INCLUDED
#define ACT1_H_INCLUDED
#include"verify.h"
#include"Disp.h"
void act1(char x[]){
//x=strtok(x," ");
FILE *rptr=NULL;
rptr = fopen("2.bin", "ab+");
char line[20][100];
int i=0,tot=0,fl=-1;

while(fgets(line[i], 100, rptr))
{
    line[i][strlen(line[i])] = '\0';
    i++;
}
tot=i;
/*for(i = 0; i < tot; ++i)
    {
        if(strcmp(x,line[i])==0)
        {

        fl=0;break;

        }
    }
if(fl==-1)*/

char temp[20],f[40];
char *t=temp;
strcpy(f,"");
printf("Enter date in dd/mm/yy form:");
fgets(temp,20,stdin);
strcat(f,strtok(t,"\/"));

strcat(f," ");
strcat(f,strtok(t+3,"\/"));
strcat(f," ");
strcat(f,(t+6));
strcat(f," ");
strtok(f,"\n");

strcat(f," ");
Disp(f);
char *omp=f;
printf("Enter Room No.s:");
*t="";
strtok(line[i],"\n");
scanf("%s",t);
itoa(((t[1]-'0')+10*((t[0]-'a')+1)),t,10);

strcat(omp,t);
char res;
printf("Confirm booking?(y or n)");
fflush(stdin);
res=getchar();
//printf("**%s**\n", omp);

if((avail(omp)==0)&&(tolower(res)=='y'))
{fprintf(rptr, "%s \/", x);
    fprintf(rptr, "%s\n",f);
    printf("Your booking has been confirmed!\n");

}
else if(tolower(res)=='n')
    goto en;
else
  printf("!!!!! Already Booked !!!!!!!!!\n");
fclose(rptr);
en:
    return;
}
#endif // ACT1_H_INCLUDED
