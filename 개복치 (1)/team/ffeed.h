#pragma once
#include<stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>


void feed(int* count)//�����ֱ�
{
    int feed = 0;


    printf("���̸� �ַ��� 1�� ��������");
    scanf_s("%d", &feed);
    if (feed == 1)
    {
        printf("���̸� �־����ϴ�! \n");
        (*count)++;
    }
    else
    {
        printf("���̸� �߸� �־����ϴ�.\n");
        *count = -1;
    }


}
