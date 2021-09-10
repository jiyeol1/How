// ★개복치 게임★

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "diss.h" // 질병
#include "ffeed.h" //먹이
#include "exp.h" // 레벨
#include "poop.h" // 화장실
#include "suprise.h" // 급사
#include "rand_d.h" // 질병에 걸릴 확률
int main(void)
{
	int Lv = 1; // 레벨
	int life = 1; // 목숨
	int cnt = 0; // 먹이를 먹은 횟 수 및 경험치
	int to = 0; //화장실에 간 횟 수
	monitor(&Lv);
	while (life != 0)
	{
		suprise_die(&Lv, &life);
		if (life != 1) // 성장통으로 인한 사망 -> 종료
			break;
		int k = 4;
		feed(&cnt);
		if (rand_d() < k) // 배열 셔플 후 30% 확률로 질병에 걸림
		{
			disease(&life); //질병 난수
		}
		growth(&cnt, &Lv); // 성장

		if (cnt == -1) // 먹이를 잘못 줬을시 사망
		{
			life = life - 1;
			printf("잘못된 먹이를 먹어서 죽었습니다.");
		}
		else if (cnt % 4 == 0 && cnt!=0) // 밥을 4번 먹을 때마다 화장실에 보냄
		{
			GoToilet(&to,&life);
		}

	}

	return 0;
}