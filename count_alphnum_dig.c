#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[40]="welcome to mits and mits1";
	char ch;
	int c=0,d=0,i=0,an=0;
	while(str[i]!='\0')
				{
					ch=str[i];
					if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
						c++;
					if(ch>='0' && ch<='9')
						d++;
					if(isalnum(str[i]))
						an++;
					i++;
					}
					printf("characters::%d\n",c);
					printf("digits::%d\n",d);
					
					printf("an::%d\n",an);
				return 0;
}
