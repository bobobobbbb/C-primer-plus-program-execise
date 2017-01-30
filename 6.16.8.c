#include<stdio.h>
int main(void)
{
    float i,j,h;

    printf("Enter some number:\n");
    while (scanf("%f%f",&i,&j) == 2)
    {
        printf("%f\n",(i - j)/(i * j));
    }
    return 0;
}
