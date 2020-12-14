//
//  excercise8-5.c
//  MyCStudy
//
//  Created by Kim Yun on 2020/10/08.
//

#include <stdio.h>

int main(void) {
    int num;
    printf("0 이상의 정수를 하나 입력하시오: ");
    scanf("%d",&num);
    
    switch (num/10) {
        case 0:
            printf("0이상 10미만\n");
            break;
        case 1:
            printf("10이상 20미만\n");
            break;
        case 2:
            printf("20이상 30미만\n");
            break;
        default:
            printf("30이상\n");
            break;
    }
        
    return 0;
}
