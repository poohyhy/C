//
//  SubExample.c
//  MyCStudy
//
//  Created by Kim Yun on 2020/10/07.
//

#include <stdio.h>

int main(void) {
    int a, b, result=0;
    scanf("%d %d", &a, &b);
    result=(a>b)?(a-b):(b-a);
    printf("%d",result);
    return 0;
    
    
}
