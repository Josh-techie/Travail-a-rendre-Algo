#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "simulation.h"

void arrivees(Queue* file, int minClients, int maxClients) {
    srand(time(NULL));
    int numClients = minClients + rand() % (maxClients - minClients + 1);
    for (int i = 0; i < numClients; i++) {
        enqueue(file, i);
    }
}

void liberer_guichets(Queue* file, int* guichetA, int* guichetB, int* guichetC, int currentTime) {
    if (!isEmpty(file)) {
        if (currentTime - file->items[file->front] >= 0) {
            dequeue(file);
            *guichetA = *guichetB = *guichetC = currentTime;
        }
    }
}

void remplir_guichet(Queue* file, int* guichetA, int* guichetB, int* guichetC, int currentTime) {
    if (!isEmpty(file)) {
        *guichetA = *guichetB = *guichetC = currentTime;
        dequeue(file);
    }
}
