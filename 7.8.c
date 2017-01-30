#include<stdio.h>
#define COVERAGE 350
int main(void)
{
    int cans;
    int sq_feet;

    printf("Enter number of square to be painted:\n");
    while (scanf("%d",&sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += (sq_feet % COVERAGE == 0)? 0: 1;
        printf("You need %d %s of paint.", cans, (cans == 1)? "can" :"cans");
        printf("Enter next value (q to quit):");
    }

    return 0;
}
