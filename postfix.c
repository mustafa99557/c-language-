#include <ctype.h>
#include <stdio.h>
#define STACK_MAX_SIZE 20
int stack [STACK_MAX_SIZE];
int top = -1;
//Declare the required stack variables.

//Return 1 if stack is empty else return 0.
int isEmpty() {
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
	while(*e != '\0'){
		if(isdigit(*e))
			push(*e-'0');
		else if (*e == '+' ||*e == '-' || *e == '*' || *e == '/' || *e == '%') {
			if(isEmpty()){
				printf("Invalid postfix expression.\n");
				return;
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
				result = b * a;
				break;
				case '/':
				result = b / a;
				case '%':
				result = b % a;
				break;
			}
			push(result);
		}
		e++;
	}
	if(isEmpty()){
		printf("Invalid postfix expression.\n");
		return;
	}
	result = pop();
	if(!isEmpty()) {
		printf("Invalid postfix expression.\n");
		return;
	}
	printf("Result : %d\n",result);
}

//Read a postfix expression and evaluate it.
int main() {
	char exp[20];
	char *e, x;
	printf("Enter the postfix expression : ");
	scanf("%s",exp);
	e = exp;
	evaluatePostfix(e);

}