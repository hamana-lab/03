#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1, num2; 
    
    printf("���ڸ� �Է��ϼ���:");
    scanf("%d", &num1); 
    printf("�и� �Է��ϼ���:");
    scanf("%d",&num2); 
    printf("�������� ����� %f\n�Դϴ�.",(float)num1/num2);
    

    system("PAUSE");
    return 0;
  
}
