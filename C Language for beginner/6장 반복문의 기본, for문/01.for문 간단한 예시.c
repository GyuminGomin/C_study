#include <stdio.h>

int main(){
    int i;
    int dan;

    printf("�� ��? : ");
    scanf("%d",&dan);

    for (i=1; i<=9; i++){
        printf("%d X %d = %d \n",dan, i, dan*i);
    }
}