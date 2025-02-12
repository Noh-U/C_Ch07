/*
  [p168 문제 07-4 문제 2]

  for문을 이용해서 문제를 해결하시오.

  다음 수식인 계승(factorial)을 계산하는 프로그램을 작성해보자.
  n! = 1 × 2 × 3 × ... ... × n
  프로그램 사용자로부터 n에 해당하는 정수를 입력받는다. 그러면 n의 계승 n!를 계산해서
  출력이 이뤄져야 한다.
*/

#include <stdio.h>

int main_18(void)
{
	int num = 0, i, fact = 1;

	printf("정수를 입력하시오 : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		fact *= i;

	printf("%d!를 계산한 값 = %d", num, fact);
	return 0;
}