#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

int isFull() {
    return rear == MAX - 1;
}

int isEmpty() {
    return front == -1 || front > rear;
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } else {
        if (front == -1) {
            front = 0;
        }
        queue[++rear] = value;
        printf("%d enqueued to queue\n", value);
    }
}

// Dequeue operation
int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Cannot dequeue\n");
        return -1;  // Error value
    } else {
        return queue[front++];
    }
}

// Peek front element
int peek() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    } else {
        return queue[front];
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("%d dequeued from queue\n", dequeue());
    printf("Front element is %d\n", peek());

    return 0;
}

