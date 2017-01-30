#include<stdio.h>
#define DARATE 0.1
#define DERATE 0.05
int main(void)
{
    float da = 100.0f;
    float de = 100.0f;
    int year = 0;

    while (de <= da)
    {
        year++;
        da += 100.0 * DARATE;
        de += de * DERATE;  
    }
    printf("There are %d years,and da = %.2f, de = %.2f", year, da, de);

    return 0;
}
