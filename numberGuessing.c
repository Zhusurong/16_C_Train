/*������Ϸ*/ 
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand(time(NULL));
	int n, guess, result, times = 10;	/*�趨��������*/
	for(;;)
	{
		printf("\nstrat or not ? (1 / 0)\n");
		times = 10;
		scanf("%d", &n);
		if(n)
			result = rand() % 100 + 1;	/*����1~100�������*/
		else 
			break;
		while(n)
		{
			
			printf("\nplease guess:");
			scanf("%d", &guess);
			if(guess > result)
				printf("Larger than the result!\n");	/*�Ƚ����*/
			else if(guess < result)
				printf("Smaller than the result!\n");	/*�Ƚ��С*/ 
			else
			{
				printf("\n+------+\n");
				printf("|Bingo!|\n");
				printf("+------+\n");
				break;
			} 
			times--;
			if(!times)
			{
				printf("\n+-----------+\n");
				printf("|you failed!|\n");
				printf("+-----------+\n");
				break;
			}
			printf("%d chance left\n", times);	
		}
	}
	printf("Game is over!");
	return 0;
}
