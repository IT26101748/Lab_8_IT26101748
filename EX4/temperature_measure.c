#include <stdio.h>

int main(void)
{
    int temp[7];
    int hottest_temp;
    int hottest_day = 1;
    int coldest_temp;
    int coldest_day = 1;

    for (int i = 0; i < 7; i++)
    {
        printf("ENTER THE TEMPERATURE OF DAY %d : ", i + 1);
        scanf("%d", &temp[i]);
    }

    hottest_temp = temp[0];
    coldest_temp = temp[0];

    for (int i = 0; i < 7; i++)
    {
        if (temp[i] > hottest_temp)
        {
            hottest_temp = temp[i];
            hottest_day = i + 1;
        }

        if (temp[i] < coldest_temp)
        {
            coldest_temp = temp[i];
            coldest_day = i + 1;
        }
    }

    printf("HOTTEST DAY: DAY %d WITH %d DEGREES\n", hottest_day, hottest_temp);
    printf("COLDEST DAY: DAY %d WITH %d DEGREES\n", coldest_day, coldest_temp);

    return 0;
}

