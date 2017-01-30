#include<stdio.h>
int main(void)
{
    double sum1,sum2;
    int sign,item,i;

    printf("Enter a digit:\n");
    scanf("%d",&item);
    for (sign = -1,sum1 = 0,sum2 = 0,i = 1;i <= item;i++)
    {
        sum1 += 1.0/i;
        sign = sign * (-1);
        sum2 += sign * (1.0/i);     
    }
    printf("%lf\n%lf\n",sum1,sum2);
    return 0;
}
