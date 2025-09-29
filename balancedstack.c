#include<stdio.h>
#include<conio.h>
#include<string.h>
#define STACK_MAX_SIZE 30
char arr[STACK_MAX_SIZE];
int top = -1;
void push(char element){
if(top == STACK_MAX_SIZE - 1){
printf("Stack is overflow\n");
}else{
top = top+1;
arr[top] = element;
   }
}

char pop(){
long int x;
if(top < 0){
printf("Stack is underflow\n");
} else {
      x = arr[top];
     top = top-1;
 }
return x;
}
int isempty(){
if(top == -1){
return 1;
}else{
  return 0;
}

}
int isBalanced(char exp[]){
       int n = strlen(exp);
        int i = 0;
          char x;

switch(exp[i]){
	case ')' :
x=pop();
if(x == '{' || x == '['){
return 0;
}
break;
	case ']' :
x = pop();
if(x == '{' || x == '('){
return 0;
}
break;
}
