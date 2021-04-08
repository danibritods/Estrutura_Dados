#include <stdio.h>
#include <stdlib.h>
#define GET_VARIABLE_NAME(Variable) (#Variable)

struct Set{
	int* element;
	int n;	
};

typedef struct Set Set; 

Set* Init(){
	Set *S = (Set *) malloc(sizeof(Set));
	if(S != NULL){
		S->element = NULL;	
		S->n = 0;	
		return S;
	};
	printf("%s\n","deu ruim" );	
};

void Push(Set *S, int z){
	S->n++;
	int n = S->n;
	int *newdata = (int*) malloc(sizeof(int) * n);
	if (n==1){
		newdata[0] = z;
	}
	else{
		int alocado = 0;
		int i = 0;
		int j = 0;
		for(i; i<n-1; i++){
			if(z == S->element[i]){
				alocado = 1;
				S->n--;
			};

			if(z < S->element[i] && !alocado){
				newdata[j] = z;
				alocado = 1;
				j++;
			}; 
			newdata[j] = S->element[i];
			j++;
		};
	//printf("n:%d,i:%d,j:%d\n",n,i,j);

		if (i==j && !alocado){
			 	newdata[n-1] = z;
			 };	 
	};
	free(S->element);
	S->element = newdata;
	};  

void Print(Set *S){
	//printf("Printando o conjunto %s: \n",GET_VARIABLE_NAME(S));
	int n = S->n;
	for (int i=0;i<n;i++){
		printf("i:%d | elemento: %d \n",i,S->element[i]);
	
	};
	printf("\n \n");
};

int Is_empy(Set *S){
	return (S->n == 0);
};

int Is_present(Set *S, int z){
	for(int i=0; i<S->n; i++){
		if (z == (int)S->element[i]){
			return i;
		};
	};
	return -1;
};

void Remove(Set *S, int z){
	int index = Is_present(S,z);
	if(index == -1){
		printf("\n Elemento %d não pertence ao conjunto\n \n",z);//,GET_VARIABLE_NAME(S));
	}
	else{
		int n = S->n;
		S->n--;
		int *newdata = (int*) malloc(sizeof(int) * S->n);
		int j=0;
		for(int i = 0; i<n-1; i++){
			if (i==index){
				i++;
			};
			newdata[j] = S->element[i];
			j++;
		};
		free(S->element);
		S->element = newdata;	
	};
		
}; 

int Smaller(Set *S){
	if (Is_empy(S))
	{
		printf("Erro, conjunto Vazio\n");
	};
	return S->element[0];
}

int Are_Equal(Set *A, Set *B){
	if (A->n != B->n)	{
		return 0;
	}
	else{
		for(int i = 0; i < A->n; i++){
			if (A->element[i] != B->element[i])
			{
				return 0;
			};
		};
		return 1;
	};
};

Set* Union(Set *A, Set *B){
	Set *C = Init();
	//int n = (A->n > B->n)?A->n:B->n;
	//Queria muito fazer de um jeito mais elegante e eficiente mas o tempo tá curto :((
	for (int i = 0; i < A->n; ++i)	{
		Push(C,A->element[i]);
		if (i<B->n){
			Push(C,B->element[i]);
		};
	};
	return C;
};

