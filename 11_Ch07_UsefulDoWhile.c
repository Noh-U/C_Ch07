/*
  [p160 예제 문제 UsefulDoWhile.c]
  프로그램 사용자에게 정수를 입력받고, 입력받은 정수를 계속해서 더해나간다. 
  이러한 덧셈은 0이 입력될 때까지 계속된다. 즉, 0이 입력되면 덧셈결과를 
  출력하고 프로그램은 종료된다.
*/

#include <stdio.h>

int main_11(void)
{
	int i = 0, j = 0;

	do
	{
		printf("정수를 입력하시오 : ");
		scanf("%d", &i);
		if (i == 0)
			break;
		j += i;
	} while (1);
	printf("정수의 합 : %d", j);
	return 0;
}