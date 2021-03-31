#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int operations_number;

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
        printf("---\n");
        for(int i = 0; i <(int) pow(((*A).n),2); i++){
                (*A).elementos[i] = rand() % 50;
	        //   A->elementos[i] = 1;
        };
	return A;
};

void Print(Matriz *A){
        for(int i=0; i <(int) pow(((*A).n), 2); i++){
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
		for(int i = 0; i < (int)(n*n); i++){
			C->elementos[i] = A->elementos[i] + B->elementos[i];
			operations_number++;
		};
	return C;
	};
};


Matriz* Multiply(Matriz *A, Matriz *B){
	if(A->n == B->n){
		int n = A->n;
		Matriz *C = Init(n);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				for(int k = 0; k < n; k++){
					C->elementos[3*i+j] += A->elementos[3*i+k] * B->elementos[j+3*k];
					operations_number++;
				};
			};
		};
return C;	};
};

	


void main(){
	operations_number = 0; 
	int size =500;
       Matriz *A = Fill_rand(Init(size));
       Matriz *B = Fill_rand(Init(size));

	clock_t begin = clock();

       Matriz *C = Sum(A,B);
//	Matriz *C = Multiply(A,B);

	clock_t end = clock();
	/*

        Print(A);
	Print(B);
	Print(C);
*/	
	printf("Número de operações: %d \n", operations_number);
	printf("Tempo gasto em: %f ms \n",(double) (end - begin)*1000/CLOCKS_PER_SEC);
	free(A);
	free(B);
	free(C);

};
   
