/*
   [p155 문제 07-1 문제 5번]
   프로그램 사용자로부터 입력 받은 정수의 평균을 출력하는 프로그램을 작성하되 
   다음 두 가지 조건을 만족시켜야 한다.
   "먼저 몇 개의 정수를 입력할 것인지 프로그램 사용자에게 묻는다. 그리고 그 수만큼
   정수를 입력 받는다."
   "평균 값은 소수점 이하까지 계산해서 출력한다."
*/

#include <stdio.h>

int main(void)
{
	int i = 0, j = 0, k = 0;
	double sum = 0, avg = 0;

	printf("몇 개의 정수를 입력하시겠습니까? : ");
	scanf("%d", &i);

	while (j < i)
	{
		printf("정수를 입력하시오 : ");
		scanf("%d", &k);
		j++;
		sum += k;
	}
	avg = (double)sum / i;
	printf("입력받은 정수의 평균 : %f", avg);
	return 0;
}