#pragma once
#include<stdio.h>
void monitor(int* level);
void growth(int *cnt, int *Lv) {//����

    if (*cnt >= 5) //������
    { 

        printf("�����մϴ�. �Ѵܰ� �����߽��ϴ�.\n");
        *Lv = *Lv + 1;
        *cnt = 0;
        for (int i = 0; i < *Lv; i++)
        {
            for (int j = 0; j < *Lv; j++)
            {
                printf("��");
            }
            printf("\n");
        }
    }

    printf("\n");
}

void monitor(int *level) // �� ǥ��
{
    for (int i = 0; i < *level; i++)
    {
        for (int j = 0; j < *level; j++)
        {
            printf("��");
        }
        printf("\n");
    }
}

