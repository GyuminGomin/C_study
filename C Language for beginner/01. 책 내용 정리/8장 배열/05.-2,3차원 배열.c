#include <stdio.h>

int main(){
    int aa[3][4];
    int i, k, j;

    int val = 1;

    for(i=0; i<3; i++){
        for (k=0; k<4; k++){
            aa[i][k] = val;
            val++;
        }
    }

    printf("aa[0][0]부터 aa[2][3]까지 출력 \n");

    for(i=0; i<3; i++){
        for (k=0; k<4; k++){
            printf("%3d",aa[i][k]);
        }
        printf("\n");
    }
    printf("\n");
    

    int bb[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for(i=0; i<3; i++){
        for (k=0; k<4; k++){
            printf("%3d",bb[i][k]);
        }
        printf("\n");
    }
    printf("\n");
    

    int cc[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12} // 3행 4열
        }, // 윗면
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24} // 3행 4열
        } // 아랫면
    };

    for(i=0; i<2; i++){
        for (k=0; k<3; k++){
            for (j=0; j<4; j++){
                printf("%3d",cc[i][k][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}