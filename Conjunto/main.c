#include <stdio.h>
#include <stdlib.h>
#include "conjuntos.h"


void main()
{
	Set *A = Init();
	printf("\n O conjunto A é %s \n\n",(Is_empy(A)==1)? "Vazio":"Não-vazio");

	printf("Vamos preencher A\n");
	Push(A,3);
	Push(A,10);
	Push(A,4);
	Push(A,1);
	Push(A,8);
	Push(A,5); 
	Push(A,9);
	Push(A,4);
	Push(A,0);
	Push(A,3);
	Push(A,8);
	Push(A,8);
	Push(A,5);
	Push(A,2);
	Print(A);

	printf("O conjunto A é %s \n \n",Is_empy(A)? "Vazio":"Não-vazio");
	
	printf("O elemnto 2 %s ao conjunto A \n",Is_present(A,2)!=-1? "pertence":"não pertence");
	printf("O elemnto 32 %s ao conjunto A \n",Is_present(A,32)!=-1? "pertence":"não pertence");

	printf("\n Removendo elementos 5,2,0,1 e demonstrando erro de elemento fora do conjunto\n");
	Remove(A,26);
	Remove(A,5);
	Remove(A,2);
	Remove(A,0);
	Remove(A,1);
	Print(A);

	printf("O menor valor de A é %d \n \n",Smaller(A));

	printf("Criando um junto B com os mesmos elementos do A\n");
	Set *B = Init();
	Push(B,4);
	Push(B,8);
	Push(B,9);
	Push(B,10);
	Push(B,3);

	printf("Os conjuntos A e B %s iguais \n\n",Are_Equal(A,B)? "são":"não sã0");

	Set *C = Init();
	Push(C,3);
	Push(C,8);
	Push(C,5);

	printf("Fazendo o D ser união AuC e printando:\n");
	Set *D = Union(B,C);
	Print(D);

	free(A);
	free(B);
	free(C);
	free(D);

};