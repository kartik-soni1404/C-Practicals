#ifndef SIGNUP_H_INCLUDED
#define SIGNUP_H_INCLUDED
int pss(char ch[])
{

	if (strlen(ch)<5)
	{
		printf("Invalid Password.Password should be of atleast 5 characters!\n");
		return 0;

	}
	int low=0,up=0,sp=0,num=0,i;
	for ( i = 0; i < strlen(ch); ++i)
	{
		if(islower(ch[i]))
			low++;
		else if (isupper(ch[i]))
			up++;
		else if (isdigit(ch[i]))
			num++;
		else
			sp++;
	}
	if (low==0)
	{
		printf("Password should contain atleast one lowercase character");printf("\n");
return 0;
	}
	if (up==0)
	{
		printf("Password should contain atleast one UPPERCASE character");printf("\n");
return 0;
	}
	if (num==0)
	{
		printf("Password should contain atleast one Numeric character");printf("\n");
return 0;
	}
	if (sp==0)
	{
		printf("Password should contain atleast one special character");printf("\n");
return 0;
	}
return 1;
}
void signup(){
char ussr[50],pass[50],pass2[50];
    char*usr=&ussr;
   FILE *fptr;
   fptr = fopen("1.bin", "ab");
    // exiting program
    printf("Enter a Username:");
    fgets(ussr, sizeof(ussr), stdin);
    p1:do{
    printf("Enter a Password:");
    fgets(pass, sizeof(pass), stdin);}while((pss(pass)==0));
    printf("Re-enter the Password:");
    fgets(pass2, sizeof(pass2), stdin);
    if((strcmp(pass,pass2)==0))
    {usr=strtok(ussr,"\n");
    strcat(usr,"\ ");
    strcat(usr,pass);

    fprintf(fptr, "%s", usr);
    }
    else{
        printf("Passwords don't match!\n");
        goto p1;
    }fclose(fptr);
}
#endif // SIGNUP_H_INCLUDED
