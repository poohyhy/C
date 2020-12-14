//
//  4.c
//  MyCStudy
//
//  Created by Kim Yun on 2020/11/04.
//

#include <stdio.h>

int main(void) {
	char arr[50];
	scanf("%s",arr);
	int point=0;
	for(int i=0;i<sizeof(arr);i++) {
		if(arr[i]!=0) {
			point++;
		}
		else {
			break;
		}
	}
	for(int i=0;i<point;i++) {
		arr[point+i+1]=arr[point-i-1];
	}
	for(int i=0;i<point;i++) {
		arr[i]=arr[point+i+1];
	}
	printf("%s\n",arr);
	return 0;
}
