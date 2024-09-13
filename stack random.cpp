#include <stdio.h>

#define MAX_SIZE 100

typedef struct {
    int arr[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *stack) {
    stack->top = -1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(Stack *stack, int data) {
    if (isFull(stack)) {
        printf("Stack Overflow! Cannot push element %d\n", data);
        return;
    }
    
    stack->arr[++stack->top] = data;
    printf("Pushed element %d onto the stack\n", data);
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop element\n");
        return -1;
    }
    
    int data = stack->arr[stack->top--];
    printf("Popped element %d from the stack\n", data);
    return data;
}

int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    
    return stack->arr[stack->top];
}

int main() {
    Stack stack;
    initialize(&stack);
    
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    
    int top = peek(&stack);
    printf("Top element of the stack: %d\n", top);
    
    pop(&stack);
    pop(&stack);
    
    top = peek(&stack);
    printf("Top element of the stack: %d\n", top);
    
    return 0;
}
