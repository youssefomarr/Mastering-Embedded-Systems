#include <stdio.h>
int main() {
   int n,arr[30],i,element, loc;
   printf("enter number of elements \n ");
   scanf("%d", &n);
   printf("enter the elements \n ");
   for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
   printf("enter the element to be searched \n ");
   scanf("%d", &element);
for(i=0;i<n;i++){
    if(arr[i]==element){
    loc=i+1;
}
}
 printf("number found at the location= %d",loc);


	return 0;
}