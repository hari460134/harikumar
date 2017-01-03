#include<stdio.h>
#include<string.h>
int main()
{
	//int i;
	char c;
	//char str[]="harikumar";
	printf("enter a character to find vow or con\n");
	scanf("%c",&c);
	//int len=strlen(str);
		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
			printf("%c vowel\n",c);
		else
			printf("consonant\n");
	return 0;
}
