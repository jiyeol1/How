#pragma once
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>

void GoToilet(int *to, int *life)
{
    char Clear[7];

    
    printf("�ػ��������\nȭ��ǿ� �����ּ���.\n");

    printf("�Է� : ");
    scanf_s("%s", Clear, sizeof(Clear));

    if (strcmp(Clear, "ok") == 0)
    {
        printf("����\n");
        *to = *to + 1;
        //return
    }

    else
    {
        printf("������������ ���� ���\n");
        *life = *life - 1;
    }
    
}