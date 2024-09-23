#include "stdio.h"
int main(){
	float a [2][2], b [2][2], c[2][2];
	int i,j;

	printf("enter the elements of the first matrix: \n");

	for( i=0; i<2; ++i){
		for(j=0;j<2;++j){
			printf("enter a%d%d: \n",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f" ,&a[i][j]);

		}
	}
	printf("enter the elements of the first matrix \n");

	for( i=0; i<2; ++i){
		for(j=0;j<2;++j){
			printf("enter b%d%d: \n",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f" ,&b[i][j]);

		}
	}
	for( i=0; i<2; ++i){
		for(j=0;j<2;++j){
			c[i][j]=a[i][j] +b[i][j];
		}
	}
	printf("sum of matrix: ");

	for( i=0; i<2; ++i){
			for(j=0;j<2;++j){
				printf("%f \t",c[i][j]);

			}
	}

	return 0;
}
