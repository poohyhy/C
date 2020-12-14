//
//  1.c
//  MyCStudy
//
//  Created by Kim Yun on 2020/11/04.
//

#include <stdio.h>

int main(void) {
	int arr[5];
	int max, min, sum;
	for(int i=0;i<5;i++) {
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	sum=0;
	for(int i=0;i<5;i++) {
		if(max<arr[i]) {
			max=arr[i];
		}
	}
	for(int i;i<5;i++) {
		if(min>arr[i]) {
			min=arr[i];
		}
	}
	for(int i=0;i<5;i++) {
		sum+=arr[i];
	}
	printf("배열의 최댓값: %d, 최솟값: %d, 합계: %d\n", max, min, sum);
	return 0;
	
}
