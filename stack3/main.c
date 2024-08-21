#define STACKSIZE 100

static int stack[STACKSIZE];
// top of stack
static int tos;
// 허용된 연산에 의해 메인 접근
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
