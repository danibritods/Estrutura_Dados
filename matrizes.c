#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Matriz {
	float* elementos;
	int n; //Dimensão da matriz quadrada
};

typedef struct Matriz Matriz;

Matriz* init(int n){
	Matriz *A = (Matriz *) malloc(sizeof(A) * pow(A->n,2));
	if(A != NULL){
		printf("Até aqui ok");
		(*A).elementos = NULL;
		(*A).n = n;
		return A;
	};
	printf("É já deu BO no init");
	return NULL;
};

void fill_rand(Matriz *A){
	for(int i = 0; i < pow(((*A).n),2); i++){
		(*A).elementos[i] = rand();
	};
};

void print(Matriz *A){
	for(int i=0; i < pow(((*A).n), 2); i++){
		printf("%f ", (*A).elementos[i]);
		if(fmod(A->elementos[i],(float)A->n) == 0){
			printf("/n");
		};
	};
};

void main(){
	printf("Hello \n");
	Matriz *A = init(2);
	fill_rand(A);
	print(A);
};
	


//Tentar depois cirar uma função que percorre a matriz, 
// e recebe outra função pra aplicar em cada elemento (criar um map né)


