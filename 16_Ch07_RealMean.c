/*
   [p166 예제 문제 RealMean.c]
   for문을 이용해서 프로그램 사용자가 입력하는 실수의 평균값을 출력한다.
   실수의 입력은 0보다 작은 음의 실수 값이 입력될 때까지 계속되며, 입력을
   마무리하기 위해서 마지막으로 입력된 음의 실수는 평균값 계산에서 제외
   시켰다.

   ex)
   실수 입력(minus to quit) : 3.2323
   실수 입력(minus to quit) : 5.1891
   실수 입력(minus to quit) : 2.9297
   실수 입력(minus to quit) : -1.0
   평균 : 3.783700
*/

#include <stdio.h>

int main_16(void)
{
	double total = 0, i = 0, avg = 0;
	int num = 1; // 입력한 정수의 개수. 평균값 구할 때 필요함

	for (;;)
	{
		printf("실수 입력(minus to quit) : ");
		scanf("%lf", &i);
		if (i < 0)
			break;
		total += i;
		num++;
	}
	avg = total/(num-1); // 나누는 수가 num-1인 이유는 좀 더 고민이 필요함
	printf("평균 : %f\n", avg);
	return 0;
}