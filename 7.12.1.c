#include<stdio.h>
int main(void)
{
    char ch;
    int n_space = 0, n_n = 0, n_others = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
        {   
            n_space++;
            continue;
        }
        if (ch == '\n')
        {
            n_n++;
            continue;

        }
        n_other++;
        
    }
    printf("Done!\n");
    printf("space = %d, \\n = %d, others = %d",
            n_space, n_n, n_others);

    return 0;
}
