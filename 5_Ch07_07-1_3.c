/*
   [p155 문제 07-1 문제 3번]
   프로그램을 사용자로부터 계속해서 정수를 입력 받는다. 그 값을 계속해서 더해 나간다.
   이러한 작업은 프로그램 사용자가 0을 입력할 때까지 계속되어야 하며, 0이 입력되면 
   입력된 모든 정수의 합을 출력하고 프로그램을 종료시킨다.
*/

#include <stdio.h>

int main_5(void)
{
	int i = 0, j = 0;

	while (1)
	{
		printf("정수를 입력하시오 : ");
		scanf("%d", &i);
		if (i == 0)
			break;
		j = j + i;
	}
	printf("정수의 합 : %d", j);
	return 0;
}