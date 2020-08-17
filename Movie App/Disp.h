#ifndef DISP_H_INCLUDED
#define DISP_H_INCLUDED
int bs(int *a,int s,int k){
    for(int i=0;i<s;i++)
        if(a[i]==k)
        return 1;
    return 0;
}
void Disp(char *date){
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
int rooms[tot+1];
int *r=rooms;
fl=0;
int pos=0;
char bk[20],tb[20];
char ptr[30];
int flg=1;
int sze=0;
for(i = 0; i < tot; ++i)
    {flg=1;
        if(strcmp(line[i],"\n")!=0){
        char * t=line[i]+strlen(line[i])-1;

        char *dt=strchr(line[i],(int)('\/'));
        for(int tp=1;tp<9;tp++)
        if((*(dt+tp)==*(date+tp-1))!=1)
        flg=0;
        if(flg==1)
            *(r++)=atoi((t-2));


        sze++;
    }
    }

fclose(rptr);
/*for (int i=0;i<sze;i++)
printf("%d\n",rooms[i]);*/
printf("\n");
for(int j=1;j<=4;j++)if ((j-1)!=0)printf("%d ",(j-1));
else(printf("  "));
printf("\n");
for(int j=1;j<=4;j++){
printf("%c ",(char )('a'+j-1));
for(int k=1;k<=3;k++){
    if(bs(rooms,sze,10*j+k)==1)
    printf("# ");
    else printf("* ");
}
printf("\n\n");
}
printf("\nLegend=>\"*\":Available \"#\":Booked\n");
}


#endif // DISP_H_INCLUDED
