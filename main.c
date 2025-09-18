#include <stdio.h>
#include <stdlib.h>

int main(void){
    char c,d;
    int i,j;
    
    printf("enter a character :");
    scanf("%c", &c);
    
    i = c;
    j = c+1;
    d = c+1;
    
    printf("the next character of %c (%i) is %c (%i)\n",c,i,d,j);
    
    system("PAUSE");
    return 0;
  
}
