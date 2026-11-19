#include<stdio.h>
int main(void)
{
	int scores[11];
	int highestScore ;
	int playerPosition = 1;

	for (int i=0; i<11; i++)
	{
		printf("Enter the score of player %d: ",i+1);
		scanf("%d",&scores[i]);
	}

	highestScore = scores[0];

	for (int i=1; i<11 ; i++)
	{
		if (scores[i] > highestScore)
		{
			highestScore = scores[i];
			playerPosition = i + 1 ;
		}
	}

	printf("Highest score: %d by player %d\n",highestScore,playerPosition);

	return 0;

}
