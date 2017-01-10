#include<stdio.h>
#include<string.h>
int main()
{
	int i,temp;
	char st1[10]="hari",st2[10]="kumar";
		for(i=0;(st1[i]!='\0' || st2[i]!='\0');i++)
		{
			if(st1[i]!=st2[i])
				temp=0;
			if(st1[i]==st2[i])
				temp=1;
		}
		if(temp==1)
			printf("same");
		return 0;
		}
