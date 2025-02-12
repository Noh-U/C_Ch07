/*
  [p153 예제 문제 NineNineDan.c]
  프로그램 사용자가 입력한 정수를 바탕으로 구구단을 출력하는 코드를 작성하시오.
  ex)
  몇 단? 7
  7 × 1 = 7
  7 × 2 = 14
  7 × 3 = 21
  7 × 4 = 28
  7 × 5 = 35
  7 × 6 = 42
  7 × 7 = 49
  7 × 8 = 56
  7 × 9 = 63
*/

#include <stdio.h>

int main_2(void)
{
	int i = 0, j = 1;

	printf("몇 단? ");
	scanf("%d", &i);

	while (j <= 9)
	{
		printf("%d × %d = %d\n", i, j, i * j);
		j++;
	}
	return 0;
}