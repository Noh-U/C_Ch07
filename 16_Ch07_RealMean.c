/*
   [p166 ���� ���� RealMean.c]
   for���� �̿��ؼ� ���α׷� ����ڰ� �Է��ϴ� �Ǽ��� ��հ��� ����Ѵ�.
   �Ǽ��� �Է��� 0���� ���� ���� �Ǽ� ���� �Էµ� ������ ��ӵǸ�, �Է���
   �������ϱ� ���ؼ� ���������� �Էµ� ���� �Ǽ��� ��հ� ��꿡�� ����
   ���״�.

   ex)
   �Ǽ� �Է�(minus to quit) : 3.2323
   �Ǽ� �Է�(minus to quit) : 5.1891
   �Ǽ� �Է�(minus to quit) : 2.9297
   �Ǽ� �Է�(minus to quit) : -1.0
   ��� : 3.783700
*/

#include <stdio.h>

int main_16(void)
{
	double total = 0, i = 0, avg = 0;
	int num = 1; // �Է��� ������ ����. ��հ� ���� �� �ʿ���

	for (;;)
	{
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf("%lf", &i);
		if (i < 0)
			break;
		total += i;
		num++;
	}
	avg = total/(num-1); // ������ ���� num-1�� ������ �� �� ����� �ʿ���
	printf("��� : %f\n", avg);
	return 0;
}