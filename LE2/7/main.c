#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#include "queues.h" 

void main(){
    QUEUE* qA = createQueue();
    QUEUE* qB = createQueue();
    QUEUE* qC = createQueue();
    QUEUE* qD = createQueue();
    QUEUE* qE = createQueue();
    QUEUE* qF = createQueue();
    QUEUE* qG = createQueue();
    QUEUE* qH = createQueue();
    QUEUE* qI = createQueue();
    QUEUE* qJ = createQueue();
    QUEUE* qK = createQueue();
    QUEUE* qL = createQueue();
    QUEUE* qM = createQueue();
    QUEUE* qN = createQueue();
    QUEUE* qO = createQueue();
    QUEUE* qP = createQueue();
    QUEUE* qQ = createQueue();
    QUEUE* qR = createQueue();
    QUEUE* qS = createQueue();
    QUEUE* qT = createQueue();
    QUEUE* qU = createQueue();
    QUEUE* qV = createQueue();
    QUEUE* qX = createQueue();
    QUEUE* qW = createQueue();
    QUEUE* qY = createQueue();
    QUEUE* qZ = createQueue();


    char palavra[100];
    char inicial;
    
    FILE * file;
    file = fopen( "texto.txt" , "r");
    if (file) {
        while (fscanf(file, "%s", palavra)!=EOF)
        {
            inicial = tolower(palavra[0]);
            switch (inicial)
            {
            case 'a': 
            {
                enqueue(qA,&palavra);
                break;
            } 
            default: 
                break;
            }
        };
        fclose(file);
    };
    
    printf("%d palavras iniciadas com a letra A.\n",queueCount(qA));
    
    /*
    destroyQueue(qA);
    destroyQueue(qB);    
    destroyQueue(qC); 
    destroyQueue(qD);
    destroyQueue(qE);
    destroyQueue(qF);
    destroyQueue(qG);
    destroyQueue(qH);
    destroyQueue(qI);
    destroyQueue(qJ);
    destroyQueue(qK);
    destroyQueue(qL);
    destroyQueue(qM);
    destroyQueue(qN);
    destroyQueue(qO);
    destroyQueue(qP);
    destroyQueue(qQ);
    destroyQueue(qR);
    destroyQueue(qS);
    destroyQueue(qT);
    destroyQueue(qU);
    destroyQueue(qV);
    destroyQueue(qX);
    destroyQueue(qW);
    destroyQueue(qY);
    destroyQueue(qZ);
    */
};