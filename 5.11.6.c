#include<stio.h>
int main(void)
{
    int i = 0,sum = 0,days;

    printf("Enter an day number:");
    scanf("%d",days);
    while (i <= days)
    {
        sum = sum + i * i;
        i++
    }
    return 0;
}
