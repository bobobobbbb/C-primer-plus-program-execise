#include<stdio.h>
int main(void)
{
    char ch;
    char prev;
    int count = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == 'i' && prev == 'e')
        {
            count++;
        }
        prev = ch; 
    }
    printf("there are %d 'ei' in the input\n", count);

    return 0;
}
