#include <stdio.h>
int main() {
	int a,b;
	printf("enter a and b values\n");
	scanf("%d %d",&a,&b);
	  /*suppose a=2 means in binary it will be 0010
	b=1 i.e 0001
	a= a xor b when two same bits it is 0 for remaining it is 1.
		0  0   1   0
	 0  0   0    1
	------------------
		0   0    1    1
	--------------------
	*/
	a=a^b;  
	b=a^b;
	a=a^b;
	printf("after swap a = %d  b=%d\n",a,b);
	return 0;
}
