#ifndef VERIFY_H_INCLUDED
#define VERIFY_H_INCLUDED

int avail(char *key){
FILE *rptr=NULL;
strcat(key,"\n");
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
char bk[20],tb[20];
char *ptr;
for(i = 0; i < tot; ++i)
    {

     ptr=line[i];
     while(*ptr!='\/')ptr++;
    ptr++;


     if(strcmp(ptr,key)==0)
        {
            return 1;}
    }
fclose(rptr);
return 0;
}


#endif // VERIFY_H_INCLUDED
