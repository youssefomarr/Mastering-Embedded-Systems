/*
 * main.c
 *
 *  Created on: Jun 24, 2024
 *      Author: youss
 */


#include "stdio.h"
int main(){
	int n;
	int i;
	int fac=1;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	if(n==0) printf("\n Factorial is 1");
	else if (n<0) printf("\n Error !!! Factorial of a negative number does not exist");
	else
		for(i=1;i<=n;i++){
			fac*=i; }
	printf("\n Factorial is %d",fac);

	return 0;
}
