#include<stdio.h>
#define PERIOD '.'
int main(void)
{
    char ch;
    int charcount = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if (ch != '"' && ch != '\'')
    }
    printf("There are %d non-quote characters.\n", charcount);

    return 0;
}
