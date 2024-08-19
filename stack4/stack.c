#include <stdio.h>
#include "stack.h"

void initStack(Stack *s) {
    s->tos = 0; 
}


void push(Stack *s, int data) {
    s->array[++(s->tos)] = data;
    
}

int pop(Stack *s) {
    
    return s->array[s->tos--]; 
}

