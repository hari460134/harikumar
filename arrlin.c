#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	printf("enter a string\n");
	gets(arr);
	int len=strlen(arr);
	printf("no of characters is %d\n",len);
	return 0;
}	
