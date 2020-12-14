#include <stdio.h>

int main(void) {
    int arr[10];
    int temp;
    int countOdd=0;
    int countEven=1;
    for(int i=0;i<10;i++) {
        scanf("%d",&temp);
        if (temp%2!=0) {
                arr[countOdd]=temp;
                countOdd++;
            }
        else {
                arr[10-countEven]=temp;
                countEven++;
        }
        
    }
    for(int i=0;i<10;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}