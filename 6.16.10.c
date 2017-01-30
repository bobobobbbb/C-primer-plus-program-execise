#include<stdio.h>
int main(void)
{
    int sum,i,j,lower,upper;
    
    printf("Enter lower and upper integer limits:");
    scanf("%d%d",&lower,&upper);
    while (lower <= upper)
    {
        sum = 0;
        i = 0;
        j = upper - lower;
        for (;i <= j;i++)
        {
            sum += (i+lower) * (i+lower);
        }
        printf("The sums of the squares from %d to %d is %d\n",
                lower * lower,upper * upper,sum);
        printf("Enter lower and upper integer limits:");
        scanf("%d%d",&lower,&upper);


    }
    return 0;
}
