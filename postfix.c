#include <ctype.h>
#include <stdio.h>
#define STACK_MAX_SIZE 20
int stack [STACK_MAX_SIZE];
int top = -1;
//Declare the required stack variables.

//Return 1 if stack is empty else return 0.
int isEmpty() {
	if(top<0)
		return 1;
	else
		return 0;
}

//Push the character into stack
void push(int x) {
	if(top == STACK_MAX_SIZE - 1) {
	printf("Stack is overflow.\n");
	}else{
		top = top+1;
		stack[top] = x;
	}
}

//pop a character from stack
int pop() {
	if(top < 0){
		return -1;
	}else
		return stack[top--];
}

//Output Format - Result : <result> if the input postfix expression is vaild.
//Output Format - Invalid postfix expression,. - if the input expression is invalid.
//postfix expression is given as the parameter.
void evaluatePostfix(char * e) {
	int a,b,result;
	
			}
			a = pop();
			if(isEmpty()){
				printf("Invalid postfix expression.\n");
				return;
			}
			b = pop();
			switch(*e){
				case '+':
				result = b + a;
				break;
				case '-':
				result = b - a;
				break;
				case '*':
}
