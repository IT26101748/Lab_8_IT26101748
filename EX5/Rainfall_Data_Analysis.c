#include <stdio.h>

int main(void)
{
    int rainfall[2][7] = {0};
    int weekly_total[2] = {0};
    int total_all = 0;
    int days;
    float avg;

    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            days = 7;
        }
        else
        {
            days = 7;
        }

        for (int j = 0; j < days; j++)
        {
            printf("ENTER RAINFALL FOR WEEK %d DAY %d : ", i + 1, j + 1);
            scanf("%d", &rainfall[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < days; j++)
        {
            weekly_total[i] = weekly_total[i] + rainfall[i][j];
        }
        total_all = total_all + weekly_total[i];
    }

    avg = (float)total_all / 14.0;

    for (int i = 0; i < 2; i++)
    {
        printf("Week %d total: %d \n", i + 1, weekly_total[i]);
    }
    printf("Overall average: %f \n", avg);

    return 0;
}

