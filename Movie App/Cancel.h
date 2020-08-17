#ifndef CANCEL_H_INCLUDED
#define CANCEL_H_INCLUDED

void cancel(char *x){
FILE *rptr=NULL,*tptr;

char line[20][100];
int i=0,tot=0,fl=-1;
fflush(rptr);
rptr = fopen("2.bin", "ab+");
tptr = fopen("3.bin", "ab+");
char temp[20],f[40];
char *t=temp;
strcpy(f,"\/");
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
char *omp=f;
printf("Enter Room No.s:");
*t="";
scanf("%s",t);
itoa(((t[1]-'0')+10*((t[0]-'a')+1)),t,10);
strcat(omp,t);
strcat(omp,"\n");
while(fgets(line[i], 100, rptr))
{
    line[i][sizeof(line[i])] = '\0';
    i++;
}
tot=i;
int flag=0;
char *Temp;
for(int i=0;i<tot;i++)
{Temp=strchr(line[i],'\/');
if(Temp!=NULL&&!(strcmp(omp,Temp)==0))
{fprintf(tptr,line[i]);
    fprintf(tptr,"\n");
    flag=1;
}

}
if(flag==1)
    printf("Cancellation successful!\n");
else printf("You have no bookings!\n");
fclose(rptr);
fclose(tptr);
remove("2.bin");
rename("3.bin","2.bin");
}



#endif // CANCEL_H_INCLUDED
