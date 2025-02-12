/*
  [p161 문제 07-3 문제 3번]
  while문의 중첩관련 예제 TwoToNine.c를 do~while문의 중첩기반으로 재 구현해 보자.
  do~while문의 중첩에 대해서는 별도의 언급이 없었지만, while문의 중첩을 이해하였으니,
  충분히 응용이 가능하다.
*/

#include <stdio.h>

int main_14(void)
{
	int i = 2, j = 0;

	do
	{
		j = 1;
		do
		{
			printf("%d × %d = %d\n", i, j, i * j);
			j++;
		} while (j < 10);
		i++;
	} while (i < 10);
	return 0;
}