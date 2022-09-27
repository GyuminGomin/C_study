// 주요 헤더 파일과 관련 함수
/*
stdio.h 표준 입출력 관련 - printf(), scanf(), puts(), fopen(), fclose()
string.h 문자열 관련 - strcat(), strcmp(), strlen(), strcpy()
math.h 수학 관련 - sin(), cos(), abs(), pow(), sqrt(), log10()
malloc.h 메모리 관련 - malloc(), realloc(), calloc(), free()
stdlib.h C표준 라이브러리 관련 - exit() rand() system()
time.h 시간 관련 - clock(), time(), localtime()
*/

// 사용자가 만드는 헤더 파일
/*
컴파일러가 제공하는 헤더 파일은 <>안에 쓰고, 사용자가 만든 헤더 파일은 ""안에 쓴다.
단, 사용자가 만든 헤더 파일은 프로그램을 작성한 C 소스와 같은 폴더 내에 있어야 한다.
*/

#include <stdio.h>
#include "myHeader.h"

int main(){
    func(10);
} // 원래는 func함수가 뒤에 있기 때문에 인식을 하지 못해야 하는데, myHeader에 이미 존재하므로
// 인식 가능

void func(int num){
    printf("%d\n", num);
}