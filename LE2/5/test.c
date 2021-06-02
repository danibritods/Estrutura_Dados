#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "./../lib/queues.h" 
int main (void)
{
	char   token[10];
	int    operand1;
	int    operand2;
	int    value;
	int*   dataPtr;
	QUEUE* fila;
    int aux;

	fila = createQueue ();
	printf("Insira a fórmula: ");
	while ((scanf("%s",token))!= '\n')
	   {
           printf("token: %d \n", (atoi(token) == atoi("+")) );
       };

};