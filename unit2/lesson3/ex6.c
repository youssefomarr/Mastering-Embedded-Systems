#include "stdio.h"
int main(){
	int n;
int i;
	int sum=0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(  i=1; i<=n;i++){
		sum+=i;
	}
printf("\n sum= %d",sum);

	return 0;
}