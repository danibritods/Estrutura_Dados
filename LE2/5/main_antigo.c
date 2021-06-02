#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#include "./../lib/queues.h" 

bool eOperador(int token){
    if(token == '+' || token == '-' || token == '/' || token == '*')
        return true;
    else return false;
};

void insereExpressao(QUEUE* expressao){
    int b[] = {1,2,3,'\n'};
    void *dataPtr;

//    for(int i; expressao_char[i] != '\n'; i++){
        dataPtr = malloc(sizeof(int));
        *dataPtr = '2';
        enqueue(expressao,dataPtr);
  //  };

    

/* 
    int caractere;
    int token[10];
    int *dataPtr;



    scanf("%d",&caractere);   
    while (caractere != '\n'){
        dataPtr = (int*) malloc(sizeof(int));
        while(caractere != ' '){
            

        }
                *dataPtr = atoi(&token);
                enqueue(expressao,dataPtr);
                scanf("%d",&caractere);   
    };

    printf("Leitura finalizada \n");
*///Tentei fazer a leitura do stdin (por dois dias) e como a questão pede apenas pra "armazenar"...              
};

void main(){
    QUEUE* expressao = createQueue();
    insereExpressao(expressao);

    int op1;
    void *dataPtr = malloc(sizeof(int));
    //int op2;
    //int op3;

    dequeue(expressao,dataPtr);
    op1 = (int*) dataPtr;

    if(eOperador(op1)){
        printf("Operador: %c \n",op1);
    }
    else{
        printf("Operando: %c \n",op1);
    }

};

    
