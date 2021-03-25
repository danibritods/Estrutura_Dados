#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Matriz {
        float* elementos;
        int n; //Dimensão da matriz quadrada
};

typedef struct Matriz Matriz;

Matriz* init(int n){ 
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

void fill_rand(Matriz *A){
        printf("\n");
        for(int i = 0; i < pow(((*A).n),2); i++){
                (*A).elementos[i] = rand() % 50;
        };
};

void print(Matriz *A){
        for(int i=0; i < pow(((*A).n), 2); i++){
                printf("%.0f ", (*A).elementos[i]);
                if(fmod(i+1,((float)A->n)) == 0){ 
                        printf("\n \n");
                };
        };
};


void main(){
        printf("%zu \n", sizeof(Matriz));
	printf("%zu \n", sizeof(Matriz)* (int)pow(3,2));
       Matriz *A = init(9);
        fill_rand(A);
        print(A);
};
   
//sizeof(Matriz) * (int) pow(A->n,2))
