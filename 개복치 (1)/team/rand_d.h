#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_d()
{
	srand(time(NULL));


	int arr[10];
	int tmp;
	for (int j = 0; j < 10; j++)
	{
		arr[j] = j+1;
	}

	for (int i = 0; i < 10; i++)
	{
		tmp = arr[rand() % 10];
		arr[rand() % 10] = arr[0];
		arr[0] = tmp;
	}

	return arr[0];
}