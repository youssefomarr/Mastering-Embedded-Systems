#include "stdio.h"
int main(){
	float n1,n2,n3;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&n1, &n2, &n3);
	if(n1>n2 && n1>n3)
		printf("\n largest number is %f",n1);
	else if
	(n1<n2 && n3<n2)   printf("\n largest number is %f",n2);
	else
		printf("\n largest number is %f",n3);

	return 0;
}