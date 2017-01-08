#include<stdio.h>
int main()
{
	int c;
	printf("enter 1 to add 2 to sm 'q' to quit\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		{
				int a=1;
				printf("first value%d\n",a);
		}
		case 2:
			{
				int b=5;
				printf(" second value %d\n",b);
			}
			case 3 :
				if(c=='q')
				exit(0);
	}
	return 0;
}
