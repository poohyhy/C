#include <stdio.h>

void binary(int num) {
    int num2=num%2;
    num/=2;
    if (num>0) {
        binary(num);
    }
    printf("%d",num2);
}
int main(void) {
    int num;
    scanf("%d",&num);
    binary(num);
    return 0;
}