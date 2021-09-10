#pragma once
#include<stdio.h>
void monitor(int* level);
void growth(int *cnt, int *Lv) {//성장

    if (*cnt >= 5) //레벨업
    { 

        printf("축하합니다. 한단계 성장했습니다.\n");
        *Lv = *Lv + 1;
        *cnt = 0;
        for (int i = 0; i < *Lv; i++)
        {
            for (int j = 0; j < *Lv; j++)
            {
                printf("■");
            }
            printf("\n");
        }
    }

    printf("\n");
}

void monitor(int *level) // 몸 표시
{
    for (int i = 0; i < *level; i++)
    {
        for (int j = 0; j < *level; j++)
        {
            printf("■");
        }
        printf("\n");
    }
}

