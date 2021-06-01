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
            
            switch (inicial) {
            case 'a':
                enqueue(qA,&palavra);
                break;
            case 'b':
                enqueue(qB,&palavra);
                break;
            case 'c':
                enqueue(qC,&palavra);
                break;
            case 'd':
                enqueue(qD,&palavra);
                break;
            case 'e':
                enqueue(qE,&palavra);
                break;
            case 'f':
                enqueue(qF,&palavra);
                break;
            case 'g':
                enqueue(qG,&palavra);
                break;
            case 'h':
                enqueue(qH,&palavra);
                break;
            case 'i':
                enqueue(qI,&palavra);
                break;
            case 'j':
                enqueue(qJ,&palavra);
                break;
            case 'k':
                enqueue(qK,&palavra);
                break;
            case 'l':
                enqueue(qL,&palavra);
                break;
            case 'm':
                enqueue(qM,&palavra);
                break;
            case 'n':
                enqueue(qN,&palavra);
                break;
            case 'o':
                enqueue(qO,&palavra);
                break;
            case 'p':
                enqueue(qP,&palavra);
                break;
            case 'q':
                enqueue(qQ,&palavra);
                break;
            case 'r':
                enqueue(qR,&palavra);
                break;
            case 's':
                enqueue(qS,&palavra);
                break;
            case 't':
                enqueue(qT,&palavra);
                break;
            case 'u':
                enqueue(qU,&palavra);
                break;
            case 'v':
                enqueue(qV,&palavra);
                break;
            case 'w':
                enqueue(qW,&palavra);
                break;
            case 'x':
                enqueue(qX,&palavra);
                break;
            case 'y':
                enqueue(qY,&palavra);
                break;
            case 'z':
                enqueue(qZ,&palavra);
                break;
            default: 
                break;
            }
        };
        fclose(file);
        
        printf("%d palavras iniciadas com a letra A.\n",queueCount(qA));
        printf("%d palavras iniciadas com a letra B.\n",queueCount(qB));
        printf("%d palavras iniciadas com a letra C.\n",queueCount(qC));
        printf("%d palavras iniciadas com a letra D.\n",queueCount(qD));
        printf("%d palavras iniciadas com a letra E.\n",queueCount(qE));
        printf("%d palavras iniciadas com a letra F.\n",queueCount(qF));
        printf("%d palavras iniciadas com a letra G.\n",queueCount(qG));
        printf("%d palavras iniciadas com a letra H.\n",queueCount(qH));
        printf("%d palavras iniciadas com a letra I.\n",queueCount(qI));
        printf("%d palavras iniciadas com a letra J.\n",queueCount(qJ));
        printf("%d palavras iniciadas com a letra K.\n",queueCount(qK));
        printf("%d palavras iniciadas com a letra L.\n",queueCount(qL));
        printf("%d palavras iniciadas com a letra M.\n",queueCount(qM));
        printf("%d palavras iniciadas com a letra N.\n",queueCount(qN));
        printf("%d palavras iniciadas com a letra O.\n",queueCount(qO));
        printf("%d palavras iniciadas com a letra P.\n",queueCount(qP));
        printf("%d palavras iniciadas com a letra Q.\n",queueCount(qQ));
        printf("%d palavras iniciadas com a letra R.\n",queueCount(qR));
        printf("%d palavras iniciadas com a letra S.\n",queueCount(qS));
        printf("%d palavras iniciadas com a letra T.\n",queueCount(qT));
        printf("%d palavras iniciadas com a letra U.\n",queueCount(qU));
        printf("%d palavras iniciadas com a letra V.\n",queueCount(qV));
        printf("%d palavras iniciadas com a letra X.\n",queueCount(qX));
        printf("%d palavras iniciadas com a letra W.\n",queueCount(qW));
        printf("%d palavras iniciadas com a letra Y.\n",queueCount(qY));
        printf("%d palavras iniciadas com a letra Z.\n",queueCount(qZ));
        };
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