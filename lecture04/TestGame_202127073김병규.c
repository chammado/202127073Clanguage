#include<stdio.h>

int main()
{
	printf("\n\n");	
	printf("적 캐릭터는 HP가 30입니다.\n\n");
	printf("프로그램이 시작되면 다음과 같이 캐릭터 메이킹 화면을 구성해 주세요.\n\n");
	printf("-------------------------------------------------\n");
	printf("주인공의 공격력을 입력하세요 : ");
	fflush(stdout);
	int p;
	int e=30;	
	scanf("%d",&p);
	printf("주인공의 공격력이 %d입니다.\n",p);
	if(e<=p){
		printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n\n",p);
		printf("적의 잔여 HP : 0\n\n");
		printf("적을 물리쳤습니다.!!!\n");
		printf("Happy End\n");
		printf("--------------------------------------------------");
	}
	else{
		printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n\n",p);
		printf("적의 잔여 HP : %d\n\n",e-p);
		printf("적이 주인공을 공격하여 주인공이 뒤졌습니다.\n");
		printf("Game Over\n");
		printf("--------------------------------------------------");
	}

	

	return 0;	
}
