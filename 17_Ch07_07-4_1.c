/*
  [p167 문제 07-4 문제 1]

  for문을 이용해서 문제를 해결하시오.

  프로그램 사용자로부터 두 개의 정수를 입력받아서, 두 정수를 포함하여 그 사이에 존재하는
  정수들의 합을 계산해서 출력하는 프로그램을 작성해보자. 예를 들어서 3과 5가 입력되면,
  3+4+5의 결과가 출력되어야 한다.

  그리고 문제를 조금 간단히 하기 위해서, 첫 번째 입력되는 정수보다 두 번째 입력되는 정수가
  더 커야 한다는 조건을 걸기로 하겠다.
*/

#include <stdio.h>

int main_17(void)
{
	int i, j, sum=0;

	printf("첫번째 정수를 입력하시오 : ");
	scanf("%d", &i);

	printf("두번째 정수를 입력하시오 : ");
	scanf("%d", &j);

	for (i; i <= j; i++)
		sum += i;

	printf("입력한 두 정수를 포함하여 그 사이에 존재하는 정수들의 합 출력 : %d", sum);

	return 0;
}