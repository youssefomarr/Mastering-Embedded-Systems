#include "stdio.h"
void main(){
char charr;
printf("Enter an alphabet: ");
fflush(stdin); fflush(stdout);
scanf("%c",&charr);

if(charr=='a'||charr=='A' ||charr=='e' ||charr=='i'||charr=='o'||charr=='u'||charr=='E'||charr=='I'||charr=='O'||charr=='U')
printf("\n%c is a vowel",charr);
else
	printf("\n%c is a constant",charr);
return 0;








}