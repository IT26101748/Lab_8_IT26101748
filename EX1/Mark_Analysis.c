#include <stdio.h>
int main (void)
{
	int marks[10];
	float average;
	int sum =0;
	for (int i=0; i<10; i++)
	{
		printf("Enter the marks of student %d: ",i+1);
		scanf("%d",&marks[i]);
		sum = sum + marks[i];	
	}

	average = sum/(10.0);
	printf("Class average is: %.2f\n",average);

	for(int i=0; i<10; i++)
	{
		if (marks[i]>average)
		{
			printf("Students scoring above the average : %d\n",marks[i]);
		}
	}

	printf("\n");
	return 0;
}
