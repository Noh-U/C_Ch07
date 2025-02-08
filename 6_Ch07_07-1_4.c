/*
   [p155 문제 07-1 문제 4번]
   프로그램 사용자로부터 입력 받은 숫자에 해당하는 구구단을 출력하되, 역순으로 출력하는 프로그램을
   작성해보자.
*/

#include <stdio.h>

int main_6(void)
{
	int i = 0, j = 9;

	printf("숫자를 입력하시오 : ");
	scanf("%d", &i);

	while (j >= 1)
	{
		printf("%d × %d = %d\n", i, j, i * j);
		j--;
	}
	return 0;
}