#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void suprise_die(int* Lv, int* life)
{
	srand(time(NULL));

	

	if (*Lv == 2)
	{
		int random_l = 8;
		int a = (rand() % 10) + 1;
		if (a > random_l)
		{
			printf("�������� ���� ��Ʈ������ ���۽����� �׾����ϴ�.\n");
			*life = *life - 1;
		}
	}
	else if (*Lv == 4)
	{
		int random_l = 6;
		int a = (rand() % 10) + 1;
		if (a > random_l)
		{
			printf("�������� ���� ��Ʈ������ ���۽����� �׾����ϴ�.\n");
			*life = *life - 1;
		}
	}
	else if (*Lv == 6)
	{
		int random_l = 5;
		int a = (rand() % 10) + 1;
		if (a > random_l)
		{
			printf("�������� ���� ��Ʈ������ ���۽����� �׾����ϴ�.\n");
			*life = *life - 1;
		}
	}
	else if (*Lv == 8)
	{
		int random_l = 3;
		int a = (rand() % 10) + 1;
		if (a > random_l)
		{
			printf("�������� ���� ��Ʈ������ ���۽����� �׾����ϴ�.\n");
			*life = *life - 1;
		}
	}
	else if (*Lv == 10)
	{
		printf("��� ��� �Ǿ �Ⱑ �Ͽ����ϴ�.\n");
		*life = *life + 1;
	}
}
