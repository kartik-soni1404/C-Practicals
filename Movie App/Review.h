#ifndef REVIEW_H_INCLUDED
#define REVIEW_H_INCLUDED
void rview(char *k){
char* K=strchr(k,(int)('\/'));
printf("########\n");
printf("Date:%c%c/%c%c/%c%c\n",*(K+1),*(K+2),*(K+4),*(K+5),*(K+7),*(K+8));
printf("Room no:%c%c\n",(int)(*(K+10)+'a'-'1'),*(K+11));
printf("########\n");
}
void r1(char *x){
FILE *rptr=NULL;

char line[20][100];
int i=0,tot=0,fl=-1;
fflush(rptr);
rptr = fopen("2.bin", "ab+");
while(fgets(line[i], 100, rptr))
{
    line[i][sizeof(line[i])] = '\0';
    i++;
}
tot=i;
fl=0;
int pos=0;
char bk[20],tb[20];
char ptr[30];
for(i = 0; i < tot; ++i)
    {

     strcpy(ptr,line[i]);
     strtok(line[i]," ");
     if(strcmp(line[i],x)==0)
        rview(ptr);



    }
fclose(rptr);
}


#endif // REVIEW_H_INCLUDED
