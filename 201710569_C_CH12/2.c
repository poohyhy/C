//
//  2.c
//  MyCStudy
//
//  Created by Kim Yun on 2020/11/14.
//

#include <stdio.h>
int main(void) {
	int num1=10;
	int num2=20;
	int*ptr1=&num1;
	int*ptr2=&num2;
	*ptr1+=10;
	*ptr2-=10;
	ptr1=&num2;
	ptr2=&num1;
	printf("%d, %d, %p, %p\n",*ptr1,*ptr2,ptr1,ptr2);
	return 0;
}
