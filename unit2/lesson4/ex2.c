
#include <stdio.h>
int main(){
	int n , i ;
	float sum=0.0;
	float avg ;
	float arr [100];

	printf("Enter numbers of data \n");

	scanf("%d",&n);
	while(n>100 ||n<=0 ){
		printf(" error. enter the number again. it should be from range 1 to 100 \n");
		scanf("%d",&n);
	}
	for( i=0; i<n ; i++){
		printf("Enter a number: ");
		scanf("%f ", & arr[i]);
		sum+=arr[i];
	}
	avg = sum/n;
	printf("average is %f ",avg );
	return 0;
}
