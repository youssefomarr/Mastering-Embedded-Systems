#include <stdio.h>
#include "string.h"
int main()
{
 char text [100], charr;
 int i,counter;
  printf("enter a string \n");
  gets(text);
  printf("enter a character to find a frequency \n");
    scanf("%c",&charr);
    for(i=0;i<strlen(text);i++){
        if(charr== text[i]){
        counter++;}
    }
    printf("frequency of %c = %d",charr,counter);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}