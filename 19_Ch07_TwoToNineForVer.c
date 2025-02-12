/*
  [p168 예제 문제 TwoToNineForVer.c]
  구구단 전체를 출력하는 프로그램을 for문을 중첩을 이용하여 구현하시오.
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	
	for (j = 1; j <= 9; j++)
	{
		for (i = 1; i <= 9; i++)
			printf("%d × %d = %d\n", j, i, j * i);
		printf("\n");
	}

	return 0;
}