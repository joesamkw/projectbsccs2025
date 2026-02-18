#include <stdio.h>

#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if(rear == SIZE - 1)
        printf("Queue Full\n");
    else {
        if(front == -1) front = 0;
        queue[++rear] = value;
    }
}

int main() {
    enqueue(15);
    printf("%d", queue[front]);
    return 0;
}