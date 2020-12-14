//
//  5.c
//  MyCStudy
//
//  Created by Kim Yun on 2020/11/04.
//

#include <stdio.h>

int main(void) {
	char arr[50];
	scanf("%s",arr);
	for(int i=0;i<sizeof(arr);i++) {
		if(arr[i]<=90 && arr[i]>=65) {
			arr[i]+=32;
		}
		else if(arr[i]<=122 && arr[i]>=97) {
			arr[i]-=32;
		}
	}
	printf("%s\n",arr);
	return 0;
}
