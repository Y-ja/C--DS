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
