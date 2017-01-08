#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char c[40];
	printf("enter some text\n");
	gets(c);
	len=strlen(c);
	printf("length :%d",len);
	return 0;
}
