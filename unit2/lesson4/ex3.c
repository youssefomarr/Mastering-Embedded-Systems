#include <stdio.h>
int main() {
	int arr [10] [10],trans [10][10], r,c,i,j;
	printf("enter the number of rows and colomns \n");
	scanf("%d %d",&r,&c);
	while(r>10 || c>10 || r<=0 || c<=0) {
		printf("error.. range should be from 1 to 10. enter again \n");
		scanf("%d %d",&r,&c);
	}
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			printf("enter element a%d%d: \n",i,j);
			scanf("%d", &arr[i][j]);
		}
	}

	printf("entered matrix: \n");
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			printf("%d ", arr[i][j]);
			if(j==(c-1))
				printf("\n");
		}
	}

	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			trans[j][i]=arr[i][j];
		}
	}

	printf("transpose of matrix: \n");

	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {

			printf("%d ", trans[i][j]);

			if(j==(r-1))
				printf("\n");
		}
	}

	return 0;
}