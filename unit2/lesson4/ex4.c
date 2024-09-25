#include <stdio.h>
int main() {
    int n , arr[30], loc,element,i;
printf("enter number of elements \n");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("enter the array \n");
    scanf("%d", &arr[i]);
}
printf("enter the element to be inserted \n");
scanf("%d",&element);
printf("enter the location \n");
scanf("%d",&loc);
if(loc<0 || loc>=n){
    printf("error.. reenter the location again \n");
    scanf("%d",&loc);
}

for(i=n;i>=loc;i--)
    arr[i]= arr[i-1];
    n++;
    arr[loc-1]=element;
for(i=0;i<n;i++)
printf("%d ",arr[i]);





	return 0;
}