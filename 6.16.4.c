#include<stdio.h>
#define A 'A'
int main(void)
{
    int i,j,h = 0;
    for (i = 0;i <= 5;i++)
    {
        for (j = 0;j <= i;j++)
        {
            printf("%c",A + h);
            h++;
        }
        printf("\n");
    }
    return 0;
}
