//
//  9-5.c
//  MyCStudy
//
//

#include <stdio.h>

int square(int num) {
	
	if(num==0) {
		return 1;
	}
	
	return square(num-1)*2;
}

int main() {
	
	int num;
	
	printf("정수입력 : ");
	scanf("%d",&num);
	
	printf("2의 %d승은 %d\n",num,square(num));
	return 0;
}
