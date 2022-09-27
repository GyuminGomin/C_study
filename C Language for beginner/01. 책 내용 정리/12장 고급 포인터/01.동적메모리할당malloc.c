//malloc
/*
메모리를 미리 잡아두지 않고 필요할 때마다 메모리를 확보하는 것을 '동적 메모리 확보'라고 하며,
이때 사용하는 함수는 malloc()이다.

개념
프로그램을 실행할 때 필요한 메모리가 항상 고정되어 있다면 문제가 없지만, 경우에 따라 필요로 하는
메모리의 크기가 달라지기도 한다. 그래서 동적 메모리 할당을 사용

사용 방법
포인터 변수 = (포인터 변수의 데이터형*) malloc(포인터 변수의 데이터형 크기 x 필요한 크기)
int *p;
p = (int*) malloc(sizeof(int)*필요한 크기);
--- 여기서 (int*)를 '캐스트연산자'라고 부름

malloc 함수의 사용이 끝났다면 free()함수로 메모리를 다시 운영체제에 반납해야 한다.
free() 함수는 포인터 변수에 null 값을 넣는다는 의미인데, 그러면 포인터 변수는 아무것도 가리키
지 않으므로 그 공간을 운영체제에 반납하고 운영체제는 이 공간을 다른 용도로 사용할 수 있다.

cf. malloc으로 확보한 공간은 초기화를 시켜주지않기 때문에, 최초의 공간은 garbage value로 가득
차 있다. 이때 처음부터 0으로 초기화된 메모리를 확보하고 싶다면 malloc()대신 calloc()함수 사용
*/

#include <stdio.h>
#include <malloc.h>

int main(){

    int *p;
    int i, hap = 0;
    int cnt;

    printf(" 입력할 개수는 ? ");
    scanf("%d", &cnt);

    p = (int*) malloc(sizeof(int)*cnt);

    for(i=0;i<cnt;i++){
        printf(" %d 번째 숫자 : ", i+1);
        scanf("%d", p+i); // 주소를 넣어도 되고 배열처럼 &p[i]를 입력해도 된다.
    }

    for(i=0;i<cnt;i++){
        hap += *(p+i);
    }

    printf("입력 숫자의 합 ==> %d\n", hap);

    free(p);
}