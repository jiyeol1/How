#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int disease(int *life)
{
	

	srand(time(NULL));

	int q = (rand() % 10) + 1;
	int sc = 0;
	printf("���� �ɷȽ��ϴ�. \n");
	printf("%d�� �Է��� �ּ��� : ", q);

	scanf_s("%d", &sc);
	
	if (q == sc)
	{
		printf("���� ġ�� �Ǿ����ϴ�.\n");
		return 1;
	}
	else
	{
		printf("������ ���Ͽ� ����Ͽ����ϴ�. \n");
		*life = *life - 1;
		return 0;
	}

}