#include<stdio.h>
#define A 'A'
int main(void)
{
    int i,i1,j1,j2,j3;
    char h;

    printf("Enter an big character:");
    scanf("%c",&h);
    printf("\n");
    i = h - 'A';
    for (i1 = 0;i1 <= i;i1++)
    {
        for (j1 = 0;j1 <= i - i1;j1++)
            printf(" ");
        for (j2 = 0;j2 <= i1;j2++)
            printf("%c",A+j2);
        for (j3 = i1 - 1;j3 >= 0;j3--)
            printf("%c",A + j3);
        printf("\n");
    }
    return 0;    
}
