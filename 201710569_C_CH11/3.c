//
//  3.c
//  MyCStudy
//
//  Created by Kim Yun on 2020/11/04.
//

#include <stdio.h>

int main(void) {
	char arr[50];
	scanf("%s", arr);
	int count=0;
	for(int i=0;i<sizeof(arr);i++) {
		if (arr[i]!=0) {
			count++;
		}
		else {
			break;
		}
	}
	printf("%d\n",count);
	return 0;
}
