#include <stdio.h>
#define STACKSIZE 100

int stack[STACKSIZE];
// top of stack
int tos;

void push(int d)
{
	stack[tos] = d;
	++tos;
}

int pop(void){
	--tos;
	//int re;
	//re = stack[tos];
	return stack[tos];
}
//
int main(void)
{ 
	push(100);
	push(200);
	push(300);
	
	int re = pop();
	printf("1st pop -> %d\n", re);
	printf("2nd pop -> %d\n", pop());
	printf("3rd pop -> %d\n", pop());
	
	return 0;
}
