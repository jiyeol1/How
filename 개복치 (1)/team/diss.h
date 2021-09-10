#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int disease(int *life)
{
	

	srand(time(NULL));

	int q = (rand() % 10) + 1;
	int sc = 0;
	printf("병에 걸렸습니다. \n");
	printf("%d를 입력해 주세요 : ", q);

	scanf_s("%d", &sc);
	
	if (q == sc)
	{
		printf("병이 치료 되었습니다.\n");
		return 1;
	}
	else
	{
		printf("병으로 인하여 사망하였습니다. \n");
		*life = *life - 1;
		return 0;
	}

}