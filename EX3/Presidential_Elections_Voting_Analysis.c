#include <stdio.h>
int main (void)
{
	int votes[5];
	int maxVotes ;
	int winner =1 ;

	for (int i=0; i<5; i++)
	{
		printf("Enter the votes for candidate %d: ", i + 1);
		scanf("%d",&votes[i]);
	}

	maxVotes = votes[0];

	for (int i=1; i<5; i++)
	{
		if (votes[i] > maxVotes)
		{
			maxVotes = votes[i];
			winner = i + 1;
		}
	}

	printf("Candidate %d wins with %d votes.\n",winner, maxVotes);

	return 0;

}
