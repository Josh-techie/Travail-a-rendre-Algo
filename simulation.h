#ifndef SIMULATION_H
#define SIMULATION_H

#include "queue.h"

void arrivees(Queue* file, int minClients, int maxClients);
void liberer_guichets(Queue* file, int* guichetA, int* guichetB, int* guichetC, int currentTime);
void remplir_guichet(Queue* file, int* guichetA, int* guichetB, int* guichetC, int currentTime);

#endif /* SIMULATION_H */
