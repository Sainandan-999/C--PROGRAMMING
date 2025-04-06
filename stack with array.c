#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE];
int top = -1;

int main() {
    int value, choice;

    while (1) {
        printf("\n\n--- MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong selection! Please choose a valid option.");
        }
    }

    return 0;
}

void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack is full (Overflow)!");
    } else {
        top++;
        stack[top] = value;
        printf("Insertion successful.");
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is empty (Underflow)!");
    } else {
        printf("Deleted: %d", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
