/*
  [p156 예제 문제 TwoToNine.c]
  while문을 중첩시켜서 중첩된 while문 하나로 구구단을 전체 출력하는 코드를 작성하시오.
*/

#include <stdio.h>

int main_8(void)
{
	int i = 2, j = 0;

	while (i < 10)
	{
		j = 1;
		while (j < 10)
		{
			printf("%d × %d = %d\n", i, j, i * j);
			j++;
		}
		i++;
	}
	return 0;
}