#include<stdio.h>
int main(void)
{
    int n = -1;
    char ch;

    printf("Enter an set of characters:\n")
    while ((ch = getchar()) != '#')
    {
        n++;
        if (n % 8 == 0 && n != 0)
            printf("\n");
        printf("%5d ",ch);

            
    }
    printf("Done!");

    return 0;
}
