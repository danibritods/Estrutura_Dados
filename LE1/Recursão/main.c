#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float squareRoot(float num, float ans, float tol){
	if (fabs(ans*ans - num) <= tol)
	{
		return ans;
	}
	else
	{
		squareRoot(num,((ans*ans)+num)/(2*ans),tol);
	}
};


float C(float n,float k){
	if (k==0 || n ==k)
	{
		return 1;
	}else{
		return(C(n-1,k)+C(n-1,k-1));
	};
};

void main(){
	printf("%f\n",squareRoot(5,2,0.01));
	printf("%f\n",squareRoot(4,2,0.01));

	printf("%f\n",C(49,6));


};