// �ڰ���ġ ���ӡ�

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "diss.h" // ����
#include "ffeed.h" //����
#include "exp.h" // ����
#include "poop.h" // ȭ���
#include "suprise.h" // �޻�
#include "rand_d.h" // ������ �ɸ� Ȯ��
int main(void)
{
	int Lv = 1; // ����
	int life = 1; // ���
	int cnt = 0; // ���̸� ���� Ƚ �� �� ����ġ
	int to = 0; //ȭ��ǿ� �� Ƚ ��
	monitor(&Lv);
	while (life != 0)
	{
		suprise_die(&Lv, &life);
		if (life != 1) // ���������� ���� ��� -> ����
			break;
		int k = 4;
		feed(&cnt);
		if (rand_d() < k) // �迭 ���� �� 30% Ȯ���� ������ �ɸ�
		{
			disease(&life); //���� ����
		}
		growth(&cnt, &Lv); // ����

		if (cnt == -1) // ���̸� �߸� ������ ���
		{
			life = life - 1;
			printf("�߸��� ���̸� �Ծ �׾����ϴ�.");
		}
		else if (cnt % 4 == 0 && cnt!=0) // ���� 4�� ���� ������ ȭ��ǿ� ����
		{
			GoToilet(&to,&life);
		}

	}

	return 0;
}