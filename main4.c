#include <stdio.h>

#define max_stack 500

int isOperator(char ch) 
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

int getPriority(char op) 
{
    switch (op) 
    {
        case '+': return 1;
        case '-': return 1;
        case '*': return 2;
        case '/': return 2;
        case '^': return 3;
        default: return 0; 
    }
}

char infixToRPN(char* infix) 
{
    char stack[max_stack];
    for (int i = 0; infix[i] != '\0'; ++i) {
        char currentChar = infix[i];

        if (isOperator(currentChar)) {
            while (top >= 0 && getPriority(stack[]) >= getPriority(currentChar)) {
                result[outputIndex++] = stack[];
            }
            stack[] = currentChar;
        } else if (currentChar ==) {
            stack[] = currentChar;
        } else if (currentChar ==){
            while (top >= 0 && stack[]) {
                result[outputIndex++] = stack[];
            }
            
            --top;
        } else {
        currentChar;
        }
    }
}

int main() 
{
    char infixExpression[max_stack];

    // Input
    printf("Enter the infix expression: ");
    scanf("%s", infixExpression);

    // Convert to RPN and output the result
    char* rpnExpression = infixToRPN(infixExpression);
    printf("RPN expression: %s\n", rpnExpression);

    // Free allocated memory
    free(rpnExpression);

    return 0;
}