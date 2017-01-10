#include<stdio.h>
int main()
{
	int i,j;
	char str1[30],str2[10];
	printf("enter string one\n");
	scanf("%s",str1);
	printf("enter string two\n");
	scanf("%s",str2);
	for(i=0;str1[i]!='\0';i++);
		printf("length:%d\n",i);
	for(j=0;str2[j]!='\0';j++)
	{
		str1[i]=str2[j];
		i++;
	}
	str1[i]='\0';
	printf("%s\n",str1);
	return 0;
}
