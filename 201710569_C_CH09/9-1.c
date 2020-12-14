//
//  9-1.c
//  MyCStudy
//
//

#include <stdio.h>

int maxFunc (int a, int b, int c) {
	int result;
	if (a>b && a>c) {
		result=a;
	}
	if (b>a && b>c) {
		result=b;
	}
	if (c>a && c>b) {
		result=c;
	}
	return result;
}

int minFunc (int a, int b, int c) {
	int result;
	if (a<b && a<c) {
		result=a;
	}
	if (b<a && b<c) {
		result=b;
	}
	if (c<a && c<b) {
		result=c;
	}
	return result;
}

int main(void) {
	int max=maxFunc(1,2,3);
	int min=minFunc(1,2,3);
	printf("[1,2,3] 의 최댓값:%d, [1,2,3] 의 최솟값:%d \n", max, min);
	return 0;
}
