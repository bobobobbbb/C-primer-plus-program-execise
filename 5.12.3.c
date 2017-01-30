#include<stdio.h>
#define F 'F'
int main(void)
{
    int i,j;
    for (i = 0;i <= 5; i++)
    {
        for (j = 0;j <= i;j++)
        {
            printf("%c",F - j);
        }
        printf("\n");
    }
    return 0;
}
