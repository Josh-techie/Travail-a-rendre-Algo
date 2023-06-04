#include "queue.h"

int isEmpty(Queue* queue) {
    return queue->front > queue->rear;
}

int isFull(Queue* queue) {
    return queue->rear == MAX_SIZE - 1;
}

void enqueue(Queue* queue, int item) {
    if (isFull(queue)) {
        printf("Queue is full.\n");
        return;
    }
    queue->rear++;
    queue->items[queue->rear] = item;
}

int dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return -1;
    }
    int item = queue->items[queue->front];
    queue->front++;
    return item;
}
