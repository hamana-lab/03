#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1, num2; 
    
    printf("분자를 입력하세요:");
    scanf("%d", &num1); 
    printf("분모를 입력하세요:");
    scanf("%d",&num2); 
    printf("나누기의 결과는 %f\n입니다.",(float)num1/num2);
    

    system("PAUSE");
    return 0;
  
}
