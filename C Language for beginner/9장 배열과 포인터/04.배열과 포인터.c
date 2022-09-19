#include <stdio.h>

int main(){
    char s[8] = "Basic-C";
    char *p;

    p = s;

    printf("&s[3] 은 %d \n", &s[3]);
    printf("p+3 은 %d \n", p+3);
    printf("&s[3] 은 %s \n", &s[3]);
    printf("p+3 은 %s \n", p+3);
    // string으로 변수를 받으면, 주소값이 아니라 s[3]주소부터의 string값을 반환

    int i;

    for(i=sizeof(s)-2; i>=0; i--){
        printf("%c", *(p+i));
    }
    printf("\n");
    // string을 반대로 역전 시키는 것
}

// 참고 사항 - 포인터의 이해
/*
1. 포인터 변수가 무엇을 가리키는지 확인한다.
2. 포인터 변수를 선언할 때는 변수 앞에 *만 붙이면 된다.
3. 포인터 변수에는 꼭 주솟값을 넣어야 한다.
4. 포인터가 가리키는 곳의 실제 값을 구하려면 *을 붙인다.
cf. 절대로 포인터 변수에 직접적으로 주소값을 넣으면 안된다.
    ex. char *p;
        p = 1; (x)
*/