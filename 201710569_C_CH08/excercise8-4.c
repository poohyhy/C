//
//  gugudan.c
//  MyCStudy
//
//  Created by Kim Yun on 2020/10/08.
//

#include <stdio.h>

int main(void) {
    
    for(int i=1;i<10;i++) {
        
        for(int j=1;j<=i;j++) {
            
            if(i%2==0) {
                continue;
            }
            printf("%d*%d=%d\t",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
