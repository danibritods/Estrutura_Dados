#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "LE1_cilindro_lib.h"

struct Cilindro{
	float x_tampa,y_tampa;
	float x_fundo,y_fundo;
	// Coordenadas do exato centro das circunferências superior e inferior
	float altura, raio;

};

typedef struct Cilindro Cilindro;

Cilindro* Init(float altura,
	           float raio,
	           float x_tampa,
	           float y_tampa,
	           float x_fundo,
	           float y_fundo){
    Cilindro *C = (Cilindro *) malloc(sizeof(Cilindro));
    if(C != NULL){
    	C->altura = altura;
    	C->raio = raio;
    	C->x_tampa = x_tampa;
    	C->y_tampa = y_tampa;
    	C->x_fundo = x_fundo;
    	C->x_fundo = y_fundo;

    };
  
};

float Altura(Cilindro *C){
	return C->altura;
};

float Area(Cilindro *C){
    float h = C->altura;
    float r = C->raio;
    return 2 * M_PI * r * (r + h);
};

float Volume(Cilindro *C){
	float h = C->altura;
    float r = C->raio;
    return M_PI * r * r * h;
};

float Raio(Cilindro *C){
    return C->raio;
};