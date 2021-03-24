#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Matriz {
        float* elementos;
        int n; //Dimensão da matriz quadrada
};

typedef struct Matriz Matriz;

Matriz* init(int n){ 
        Matriz *A = (Matriz *) malloc(sizeof(Matriz) * (unsigned int) pow(A->n,2));
        if(A != NULL){
                printf("Até aqui ok");
                A->elementos = NULL;
                A->n = n;
                return A;
        };
        printf("É já deu BO no init");
        return NULL;
};
/*

void fill_rand(Matriz *A){
        printf("Mic check mic check");
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

*/
void main(){
        printf("%zu \n", sizeof(Matriz));
	printf("%zu \n", sizeof(Matriz)* (int)pow(3,2));
        printf("Hello alguma coisa ");
        printf("Teste");
       Matriz *A = init(2);
	printf("TesteB");
        //fill_rand(A);
	printf("testeC");
//        print(A);
};
   
//sizeof(Matriz) * (int) pow(A->n,2))
