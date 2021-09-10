#pragma once
#include<stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>


void feed(int* count)//먹이주기
{
    int feed = 0;


    printf("먹이를 주려면 1를 누르세요");
    scanf_s("%d", &feed);
    if (feed == 1)
    {
        printf("먹이를 주었습니다! \n");
        (*count)++;
    }
    else
    {
        printf("먹이를 잘못 주었습니다.\n");
        *count = -1;
    }


}
