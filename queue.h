#ifndef QUEUE_H
#define QUEUE_H

#define MAX_SIZE 100

typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;

int isEmpty(Queue* queue);
int isFull(Queue* queue);
void enqueue(Queue* queue, int item);
int dequeue(Queue* queue);

#endif /* QUEUE_H */
