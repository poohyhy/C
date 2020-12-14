//
//  excercise8-6.c
//  MyCStudy
//
//  Created by Kim Yun on 2020/10/08.
//

#include <stdio.h>

int main(void) {
	int sum;
	for(int A=1;A<10;A++) {
		for(int Z=1;Z<10;Z++) {
			if (A==Z)
				continue;
			sum=(A*10+Z)+(Z*10+A);
			if (sum==99)
				printf("%d%d+%d%d=99, A=%d,Z=%d\n",A,Z,Z,A,A,Z);
			
		}
	}
	return 0;
}
