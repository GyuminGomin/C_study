// �ֿ� ��� ���ϰ� ���� �Լ�
/*
stdio.h ǥ�� ����� ���� - printf(), scanf(), puts(), fopen(), fclose()
string.h ���ڿ� ���� - strcat(), strcmp(), strlen(), strcpy()
math.h ���� ���� - sin(), cos(), abs(), pow(), sqrt(), log10()
malloc.h �޸� ���� - malloc(), realloc(), calloc(), free()
stdlib.h Cǥ�� ���̺귯�� ���� - exit() rand() system()
time.h �ð� ���� - clock(), time(), localtime()
*/

// ����ڰ� ����� ��� ����
/*
�����Ϸ��� �����ϴ� ��� ������ <>�ȿ� ����, ����ڰ� ���� ��� ������ ""�ȿ� ����.
��, ����ڰ� ���� ��� ������ ���α׷��� �ۼ��� C �ҽ��� ���� ���� ���� �־�� �Ѵ�.
*/

#include <stdio.h>
#include "myHeader.h"

int main(){
    func(10);
} // ������ func�Լ��� �ڿ� �ֱ� ������ �ν��� ���� ���ؾ� �ϴµ�, myHeader�� �̹� �����ϹǷ�
// �ν� ����

void func(int num){
    printf("%d\n", num);
}