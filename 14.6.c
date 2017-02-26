#include<stdio.h>
#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double banksave;
    char save[FUNDLEL];
    double savefund;

};

double sum(const struct funds *);
int main(void)
{
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and loan",
        8543.94
    };

    printf("Stan has a total of $%.2f.\n", sum(&stan));

    return 0;
}

double sum(const struct funds * money)
{
    return(money->banksave + money->savefund);
}
