#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "LE1_cilindro_lib.h"

void main()
{
	Cilindro *C = Init(10,10,10,10,10,10);
    printf("Altura C: %.2f \n",Altura(C));
    printf("Raio C: %.2f \n", Raio(C));
    printf("Área C: %.2f \n",Area(C));
    printf("Volume C: %.2f \n",Volume(C));

	printf("\n\n");
};