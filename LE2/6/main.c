/*
Usando somente algoritmos no TAD fila, 
escreva uma função em C chamada catQueue() que concatene duas filas. 
A segunda fila deve ser colocada no final da primeira fila. 
Considere os casos em que: 
i) a segunda fila precisa ser preservada; 
ii) a segunda fila não deve ser preservada; 
iii) posso adicionar operações extras ao TAD para ganhar eficiência na concatenação em ii).
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#include "./../lib/queues.h"

void catQueue(QUEUE* fila_1, QUEUE* fila_2, int preserva)
{
    int* dataPtr;
    int n = queueCount(fila_2);

    for(int i = 0; i < n; i++)
    {
        dataPtr = malloc(sizeof(int));
        dequeue(fila_2,(void*)&dataPtr);
        enqueue(fila_1,dataPtr);  
        if (preserva)
        {
            enqueue(fila_2,dataPtr);
        }
        
    };
};

void preencheFila(QUEUE* fila, int* itens)
{
    int *dataPtr;
    for(int i = 0; itens[i] != '\n'; i++){
            dataPtr = malloc(sizeof(int));
            dataPtr = &itens[i];
            enqueue(fila,dataPtr);
};
};

void printQueue(QUEUE* fila)
{
    printf("\n");

    int n = queueCount(fila);
    int* dataPtr;

    if (emptyQueue(fila))
    {
        printf("Fila Vazia");
    }
    
    for(int i = 0; i < n; i++)
    {
        dequeue(fila,(void*)&dataPtr); 
        printf("%d",*dataPtr);
        //enqueue(fila,dataPtr);
    }; 
    printf("\n");
};

void catQueue_espertinha(QUEUE* fila_1,QUEUE* fila_2)
{
    fila_1->rear->next = fila_2->front;
    fila_1->count = fila_1->count + fila_2->count;
    fila_2->count = 0;
    fila_2->front = NULL;
};

void main()
{
    QUEUE* fila1 = createQueue();
    QUEUE* fila2 = createQueue();

    int a[] = {1,2,3,'\n'};
    int b[] = {4,5,6,'\n'};
    preencheFila(fila1,a);
    preencheFila(fila2,b);
    //catQueue(fila1,fila2,0);
    catQueue_espertinha(fila1,fila2);
    printQueue(fila1);
    printQueue(fila2);
};