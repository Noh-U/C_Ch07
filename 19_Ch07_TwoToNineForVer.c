/*
  [p168 ���� ���� TwoToNineForVer.c]
  ������ ��ü�� ����ϴ� ���α׷��� for���� ��ø�� �̿��Ͽ� �����Ͻÿ�.
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	
	for (j = 1; j <= 9; j++)
	{
		for (i = 1; i <= 9; i++)
			printf("%d �� %d = %d\n", j, i, j * i);
		printf("\n");
	}

	return 0;
}