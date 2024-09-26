#include <stdio.h>
#include "string.h"
int main()
{
 char text [100] ,rev[100];
 int i,count;
 printf("Enter a string \n");
 scanf("%s",text);
    count =strlen(text)-1;
     for(i=0;i<strlen(text);i++){
         rev[count]=text[i];
         count--;
     }
    printf("reverse string is: %s",rev);
    
    
    
    
    
    
    
    
    

    return 0;
}