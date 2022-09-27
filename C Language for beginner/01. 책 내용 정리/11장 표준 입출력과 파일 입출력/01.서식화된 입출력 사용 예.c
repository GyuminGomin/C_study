#include <stdio.h>

void main(){
    int a;
    float b;
    char ch;
    char s[20];

    printf("정수를 입력 : ");
    scanf("%d", &a);
    printf("실수를 입력 : ");
    scanf("%f", &b);
    printf("문자를 입력 : ");
    scanf("%c", &ch);
    printf("문자열을 입력 : ");
    scanf("%s", s);

    printf("\n정수의 10진수 ==> %d\n", a);
    printf("정수의 16진수 ==> %x\n", a);
    printf("정수의 8진수 ==> %o\n", a);
    printf("실수 ==> %10.3f\n", b);
    printf("실수(공학용) ==> %e\n", b);
    printf("문자 ==> %c\n", ch);
    printf("문자열 ==> %s\n", s);

    printf("\n\n\n");

    printf("문자열을 입력 : ");
    gets(s);
    puts(s); // printf, scanf보다 함수의 처리 속도가 더 빠름!!!
}
// 참고사항
/*
scanf() 대신에 보안이 강화된 scanf_s()함수를 사용하려면 주의할 점이 있다.
정수(%d)나 실수(%f)로 입력받을 때는 scanf_s("%d",&a)처럼 매개변수로 서식과
변수만 있으면 되지만, 문자나 문자열을 입력받을 때는 scanf_s("%c",&ch,1)처럼
서식, 변수에 입력받을 문자 수까지 매개변수를 3개 넣어야 한다. 문자(%c)는 한
글자만 입력받으므로 입력받을 문자 수에 1을 넣고 문자열(%s)에는 배열의 크기를
넣는다. 단, 입력하는 문자의 최대 개수는 마지막에 널 문자가 들어가기 때문에
'배열의 크기 -1'을 입력한다. 즉 17행을 scanf_s("%s",s,20)으로 수정하면 된다.
*/