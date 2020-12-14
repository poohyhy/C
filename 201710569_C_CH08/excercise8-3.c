//
//  switchExample.c
//  MyCStudy
//
//  Created by Kim Yun on 2020/10/07.
//

#include <stdio.h>

int main(void) {
    int korean, english, math, score;
    printf("국어 영어 수학 순서로 공백으로 구분하여 점수 입력: ");
    scanf("%d %d %d",&korean, &english, &math);
    score=(korean + english + math)/3;
    printf("평균: %d\n",score);
    switch (score/10) {
        case 10:    
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
        case 5:
            printf("D\n");
            break;
        default:
            printf("F\n");
        
    }
    return 0;
}
