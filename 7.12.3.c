#include<stdio.h>
int main(void)
{
    int number, temp_var, even = 0, odd = 0;
    int even_sum = 0, odd_sum = 0;

    while (scanf("%d", &temp_var) && temp_var != 0)
    {
        if (temp_var % 2 == 0)
        {
            odd_sum += temp_var;
            odd++;

        }
        else
        {
            even_sum += temp_var;
            even++;

        }
    number = even + odd;
    }
    printf("There are %d odds,the avarange of odd = %f\n", odd, (float)odd_sum / odd);
    printf("There are %d evens, the avarange of even = %f\n", even, (float)even_sum /even);
    
    return 0;
}
