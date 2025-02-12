/*
  [p165 예제 문제 AddToNum.c]
  for문을 이용해서 0이상, 그리고 프로그램 사용자가 입력한 정수 이하의 값을 
  모두 더해서 그 결과를 출력하는 예제를 소개하겠다.

  ex)
  0부터 num까지의 덧셈, num은? 10
  0부터 10까지의 덧셈결과 : 55
*/

#include <stdio.h>

int main_15(void)
{
	int i, num, total;

	printf("0부터 num까지의 덧셈, num은? ");
	scanf("%d", &num);

	total = 0;
	for (i = 0; i <= num; i++)
		total += i;

	printf("0부터 %d까지의 덧셈결과 : %d", num, total);
	return 0;
}

