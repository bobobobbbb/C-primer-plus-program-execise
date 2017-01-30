#include<stdio.h>
int main(void)
{
    int left,
        s_operand,
        f_operand;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second oprand:");
    scanf("%d",&s_operand);
    printf("Now enter the first operand:");
    scanf("%d",&f_operand);

    while (f_operand > 0)
    {
        left = f_operand % s_operand;
        printf("%d %% %d is %d\n",f_operand,s_operand,left);
        printf("Now enter the first operand (0 <= to quit):");
        scanf("%d",&f_operand);     
    }
    return 0;
}
