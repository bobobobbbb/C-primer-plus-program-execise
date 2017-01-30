#include<stdio.h>
int main(void)
{
    double first_list[8];
    double second_list[8];
    double sum;
    int index;

    printf("Enter 8 float number:\n");
    for (index = 0;index < 8;index++)
    {
        scanf("%lf",&first_list[index]);
        printf("%8.2f",first_list[index]);
    }
    printf("\n");
    for (index = 0,sum = 0;index < 8;index++)
    {
        sum += first_list[index];
        second_list[index] = sum;
        printf("%8.2f",second_list[index]);
    }
    printf("\n");

    return 0;
}
