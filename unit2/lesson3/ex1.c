#include "stdio.h"
void main(){
int i;
printf("Enter an integer you want to check:");
fflush(stdin); fflush(stdout);
scanf(" %d",&i);
if(i%2==0)
	printf("\n%d is even",i);
else
	printf("\n%d is odd",i);

}