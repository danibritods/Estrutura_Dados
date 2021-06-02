#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#include "./../lib/queues.h"

bool isOperator(int token){
    if(token == '+' || token == '-' || token == '/' || token == '*')
        return true;
    else
        return false;
};

int calculate(int op1, int op2, int op3)
{
    printf("%d %c %d \n",op2,op1,op3);
    switch (op1)
    {
    case '+': return op2 + op3; break;
    case '-': return op2 - op3; break;
    case '/': return op2 / op3; break;
    case '*': return op2 * op3; break;
    default:  return 0; break;
    };
};

void main(){
    QUEUE* fila = createQueue();
    int expre[] = {'+',2,3,'\n'};
    int *dataPtr;
    int op1,op2,op3;

    for(int i = 0; expre[i] != '\n'; i++){
            dataPtr = malloc(sizeof(int));
            dataPtr = &expre[i];
            enqueue(fila,dataPtr);
    };
    for(int i = 0; (queueCount(fila) > 1); i++){
        dequeue(fila,(void*)&dataPtr); 
        op1 = *dataPtr;
        dequeue(fila,(void*)&dataPtr); 
        op2 = *dataPtr;
        dequeue(fila,(void*)&dataPtr); 
        op3 = *dataPtr;
        if(isOperator(op1) && !isOperator(op2) && !isOperator(op3))
        {
            dataPtr = malloc(sizeof(int));
            *dataPtr = calculate(op1,op2,op3);
            enqueue(fila,dataPtr);
        }
        else
        {
            *dataPtr = op1;
            enqueue(fila,dataPtr);
            *dataPtr = op2;
            enqueue(fila,dataPtr);
            *dataPtr = op3;
        };
    };
    dequeue(fila,(void*)&dataPtr); 
    op1 = *dataPtr;
    printf("O resultado dessa expressão é: %d \n",(int)op1);



}