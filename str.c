#include<stdio.h>
int main()
{
	int count=0;
	char c;
	FILE * fp;
	fp=fopen("hk.txt","r");
	if(fp==NULL)
	{
		printf("unable to open\n");
	}
	else
	{
		while((c=fgetc(fp))!=EOF)
		{
			if(c=='\n')
				count++;
			}
			printf("lines %d\n",count);
		}
		
		return 0;
}
