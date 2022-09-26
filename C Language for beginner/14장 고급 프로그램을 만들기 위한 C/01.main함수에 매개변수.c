// 도스 명령어 type
/*
type '파일이름'과 같은 형식으로 파일을 지정 할 수 있다.
이것은 main()함수에 매개변수를 선언해주는 것과 비슷하다.

main 함수의 흐름
int main(int argc, char *argv[]) {}
명령프롬프트에서 '파일이름.exe 100 200'을 입력해주면, main()함수의 argc에 3 이 들어간다.
그리고 *argv[]에는 문자열정보 3개가 들어간다. ( 파일이름.exe, 100, 200)
*/

#include <stdio.h>

int main(int argc, char *argv[]){
    int i;

    printf(" argc 매개변수 ==> %d\n", argc);

    for(i=0;i<argc;i++){
        printf(" argv[%d] 매개변수 ==> %s\n", i, argv[i]);
    }
}