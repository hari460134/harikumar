#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character\n");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
		printf("%c is alphabet\n",ch);
	return 0;
}
