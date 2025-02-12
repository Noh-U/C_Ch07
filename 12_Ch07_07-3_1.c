/*
  [p161 문제 07-3 문제 1번]
  예제 UsefulDoWhile.c를 while문 기반으로 재 구현할 경우, 생각해볼 수 있는
  구현의 형태는 두 가지이다. 그 두 가지 방법은 다음과 같다.

  방법 1
  변수 i의 값을 적절히 초기화해서 첫 번째 반복조건의 검사결과가 '참'이 되게 한다.

  방법 2
  while문에 진입하기 전에 프로그램 사용자로부터 값을 1회 입력 받게 한다.

  이 두 가지 방법을 각각 적용해서 예제 UsefulDoWhile.c를 while문 기반으로 재 구현해
  보자. 참고로 어떤 방법이든 do~while문을 적용했을 때보다는 부자연스럽다는 느낌이
  들것이다.
*/

// 방법 1
#include <stdio.h>

int main_12(void)
{
	int i = 1, j = 0;

	while (1)
	{
		printf("정수를 입력하시오 : ");
		scanf("%d", &i);
		if (i == 0)
			break;
		j += i;
	}
	printf("정수의 합 : %d", j);
	return 0;
}


/*
// 방법 2
#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	printf("정수를 입력하시오 : ");
	scanf("%d", &i);

	while (1)
	{
		printf("정수를 입력하시오 : ");
		scanf("%d", &i);
		if (i == 0)
			break;
		j += i;
	} 
	printf("정수의 합 : %d", j);
	return 0;
}
*/

