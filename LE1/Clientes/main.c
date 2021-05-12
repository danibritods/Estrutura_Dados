#include<stdio.h>
#include <stdlib.h>	
#include "clientes.h"

struct Cliente{
	int codigo;
	char* nome;
	char* endereco;
	char* telefone[12]; 
	char data_primeira_compra[11];
	char data_ultima_compra[11]; 

};

typedef clientes struct Cliente;


void main(){

};