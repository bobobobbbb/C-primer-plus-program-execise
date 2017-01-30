#include<stdio.h>
int main(void)
{
    float length, width;

    printf("Enter the length of the rectangle:\n");
    while (scanf("%f", &length) == 1)
    {
        printf("Length = %0.2f:\n", length);
        printf("Enter its width:\n");
        if (scanf("%f", &width) != 1)
            break;
        printf("Width = %.2f:\n");
        printf("Area = %.2f", length * width);
        printf("Enter the length of the rectangle:\n");
    }
    print("Done!");

    return 0;
}
