#include<stdio.h>
#define FUNDLEN 50
#define N 2

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(const struct funds money[], int n);

int main(void)
{
    struct funds jones[N] = {
        {
            "Gfasfs",
            42432,
            "fasf",
            23423
        },
        {
            "safs",
            32423,
            "324235",
            3242
        }
    };
    printf("The Jonese have a total of $%.2f.\n", sum(jones, N));
    
    return 0;
}

double sum(const struct funds monry[], int n)
{
    double total;
    int i;
    for (i = 0, total = 0; i < n; i++)
        total += money[i].bankfund + money[i].savefund;
    return (total);

}