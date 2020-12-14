//
//  9-4.c
//  MyCStudy
//
//

#include <stdio.h>

void fiboArray(int num) {
	int a=0;
	int b=1;
	int temp;
	printf("%d, %d, ",a,b);
	temp=a+b;
	for(int i=0;i<num-2;i++) {
		printf("%d, ",temp);
		a=b;
		b=temp;
		temp=a+b;
	}
}
