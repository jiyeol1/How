#pragma once
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>

void GoToilet(int *to, int *life)
{
    char Clear[7];

    
    printf("※생리현상※\n화장실에 보내주세요.\n");

    printf("입력 : ");
    scanf_s("%s", Clear, sizeof(Clear));

    if (strcmp(Clear, "ok") == 0)
    {
        printf("생존\n");
        *to = *to + 1;
        //return
    }

    else
    {
        printf("생리현상으로 인한 사망\n");
        *life = *life - 1;
    }
    
}