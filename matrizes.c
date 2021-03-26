#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Matriz {
        float* elementos;
        int n; //Dimensão da matriz quadrada
};

typedef struct Matriz Matriz;

Matriz* Init(int n){ 
        Matriz *A = (Matriz *) malloc(sizeof(Matriz));
        if(A != NULL){
               // printf("Até aqui ok");
                A->elementos = malloc(sizeof(float) * (int)( n * n));
                A->n = n;
                return A;
        };
        printf("É já deu BO no init");
        return NULL;
};

Matriz* Fill_rand(Matriz *A){
        printf("\n");
        for(int i = 0; i < pow(((*A).n),2); i++){
                (*A).elementos[i] = rand() % 50;
        };
	return A;
};

void Print(Matriz *A){
        for(int i=0; i < pow(((*A).n), 2); i++){
                printf("%.0f ", (*A).elementos[i]);
                if(fmod(i+1,((float)A->n)) == 0){ 
                        printf("\n \n");
                };
        }; printf("\n");
};

Matriz* Sum(Matriz *A, Matriz *B){
	if(A->n == B->n){
		int n = A->n;
		Matriz *C = Init(n);
		for(int i = 0; i < A->n * B->n; i++){
			C->elementos[i] = A->elementos[i] + B->elementos[i];
		};
	return C;
	};
};

Matriz* Multiply(Matriz *A, Matriz *B){
	if(A->n == B->n){
		int n = A->n;
		Matriz *C = Init(n);
		for(int i = 0; i < n; i++){
			for(int j = 0; i < n; j++){
				for(int k = 0; k < n; k++){
					C->elementos[3*i+j] += A->elementos[3*i+k] * B->elementos[j+3*k];
				};
			};
		};
return C;	};
};

	


void main(){
       Matriz *A = Fill_rand(Init(3));
       Matriz *B = Fill_rand(Init(3));
       Matriz *C = Sum(A,B);
       Print(A);
	Print(B);
	Print(C);
	Matriz *D = Multiply(A,B);
	Print(D);

};
   
