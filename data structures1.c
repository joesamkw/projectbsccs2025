#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

// Push function
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

// Pop function
void pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

// Display function
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        int i;
        for ( i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
 {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    printf("GROUP MEMBERS:\n");
printf("Joesam Kireru BSCCS/2025/54332\n");
printf("Lorine Kavela BSCCS/2025/49688\n");
printf("Alvin Maina BSCCS/2025/54954\n");
printf("Faith Nyeresa BSCCS/2025/47451\n");
printf("Ruby Kwamboka BSCCS/2025/51470\n");
printf("Meda Cherono BSCCS/2025/58376\n");
printf("Ayub Christopher BSCCS/2025/58915\n");
    return 0;
}