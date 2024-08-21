#include <stdio.h>
int main(void)
{
	int num[5] = {1,2,3,4,5};
	int *p;
	
	p = num;
	printf("*p -> %d\n" , *p);
	
	++p;
	printf("*p -> %d\n" , *p);
	return 0;
}
