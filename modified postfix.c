#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_MAX_SIZE 20
int stack[STACK_MAX_SIZE];
int top = -1;

// Check if stack is empty
int isEmpty() {
    return top < 0;
}

// Push an element into the stack
void push(int x) {
    if (top == STACK_MAX_SIZE - 1) {
        printf("Stack overflow.\n");
    } else {
        stack[++top] = x;
    }
}

// Pop an element from the stack
int pop() {
    if (isEmpty()) {
        return -1; // Error case
    } else {
        return stack[top--];
    }
}

// Evaluate postfix expression
void evaluatePostfix(char *e) {
    int i = 0, a, b, result;

    while (e[i] != '\0') {
        if (isdigit(e[i])) { 
            // If digit, push to stack (convert char to int)
            push(e[i] - '0');
        } else {
            // Operator: need at least two operands
            if (isEmpty()) {
                printf("Invalid postfix expression.\n");
                return;
            }
            a = pop();

            if (isEmpty()) {
                printf("Invalid postfix expression.\n");
                return;
            }
            b = pop();

            switch (e[i]) {
                case '+': result = b + a; break;
                case '-': result = b - a; break;
                case '*': result = b * a; break;
                case '/': 
                    if (a == 0) {
                        printf("Division by zero error.\n");
                        return;
                    }
                    result = b / a;
                    break;
                default:
                    printf("Invalid operator: %c\n", e[i]);
                    return;
            }
            push(result);
        }
        i++;
    }

    // After evaluation, only one element should remain in stack
    if (top == 0) {
        printf("Result : %d\n", pop());
    } else {
        printf("Invalid postfix expression.\n");
    }
}

// Main function
int main() {
    char expr[50];
    printf("Enter postfix expression: ");
    scanf("%s", expr);

    evaluatePostfix(expr);

    return 0;
}
