#include<stdio.h>
int main(void)
{
    int list[8];
    int i,j;

    for (i = 1,j = 1;i <= 8;i++)
    {
        j = j * 2;
        list[i - 1] = j; 
    }
    i = 1;
    do
    {
        printf("%d\n",list[i - 1]);
        i++;
    }
    while (i <= 8);

    return 0;
}
