#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

struct Stack {
    int data[STACK_SIZE];
    int top;
};

void initStack(struct Stack* stack) {
    stack->top = -1;
}

void push(struct Stack* stack, int value) {
    if (stack->top == STACK_SIZE - 1) {
        printf("Stack Overflow!\n");
        exit(1);
    }
    stack->data[++stack->top] = value;
}

int pop(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack Underflow!\n");
        exit(1);
    }
    return stack->data[stack->top--];
}

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

void decimalToBinary(int decimal) {
    if (decimal <= 0) {
        printf("Number should be greater than 0.\n");
        return;
    }

    struct Stack binaryStack;
    initStack(&binaryStack);

    while (decimal > 0) {
        int remainder = decimal % 2;
        push(&binaryStack, remainder);
        decimal /= 2;
    }

    while (!isEmpty(&binaryStack)) {
        printf("%d", pop(&binaryStack));
    }

    printf("\n");
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}

