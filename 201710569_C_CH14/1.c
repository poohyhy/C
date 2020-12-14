#include <stdio.h>

int squareByValue(int num) {
    return num*num;
}
int squareByReference(int * ptr) {
    *ptr=(*ptr)*(*ptr);
    return *ptr;
}
int main(void) {
    int num=2;
    printf("%d, %d",squareByValue(2),squareByReference(&num));
    return 0;
}
