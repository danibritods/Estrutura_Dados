#include "data.h"
void main(){
	Data *d1 = Insert_separado(12,11,1997);

	Soma_Dias(d1,20);
	printf("%s\n",d1->string);

	Data *d2 = Init(); 
	Insert_string(d2,"4/07/1999");
	printf("%d,%d,%d\n",d2->dia,d2->mes,d2->ano);

	free(d1);
	free(d2);

};