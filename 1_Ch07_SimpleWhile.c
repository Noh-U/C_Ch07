/*
  [p149 예제 문제 SimpleWhile.c]
  아래 문장들을 반복문을 통해서 출력하시오.
  Hello world! 0
  Hello world! 1
  Hello world! 2
  Hello world! 3
  Hello world! 4
*/

#include <stdio.h>

int main_1(void)
{
	int i = 0;

	while (i < 5)
	{
		printf("Hello world! %d\n", i);
		i++;
	}
	return 0;
}