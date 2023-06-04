#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue.h"
#include "simulation.h"

int main() {
    Queue file;
    file.front = 0;
    file.rear = -1;
    int guichetA = -1;
    int guichetB = -1;
    int guichetC = -1;
    int dt = 15;
    
    for (int currentTime = 0; currentTime <= 100; currentTime += dt) {
        arrivees(&file, 0, 5);
        liberer_guichets(&file, &guichetA, &guichetB, &guichetC, currentTime);
        remplir_guichet(&file, &guichetA, &guichetB, &guichetC, currentTime);
        
        printf("Time: %d\n", currentTime);
        printf("Queue size: %d\n", file.rear - file.front + 1);
        printf("Counter A: %s\n", (guichetA != -1) ? "occupied" : "empty");
        printf("Counter B: %s\n", (guichetB != -1) ? "occupied" : "empty");
        printf("Counter C: %s\n", (guichetC != -1) ? "occupied" : "empty");
        printf("-----------------------\n");
    }

    return 0;
}
