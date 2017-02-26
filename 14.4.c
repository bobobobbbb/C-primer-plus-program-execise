#include<stdio.h>
#define LEN 20

struct names {
    char first[LEN];
    char last[len];
};

struct guy {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow[2] = {
        {
            {"zheng", "xiaopeng"},
            "potato",
            "animax maker",
            365000000.00
        },
        {
            {"lu", "hongjie"},
            "jiba",
            "mmp",
            4000000000.00
        }
    };

    struct guy * him;

    printf("address #1: %p #2: %p", &fellow[0], &fellow[1]);
    him = &fellow[0];
    printf("pointer #1: %p #2: %p", him, him + 1);
    printf("him->income is %.2f (*him).income is %.2f", him->income, 
            (*him).income);
    him++;
    printf("him->favfood is %s: him->handle.first is %s\n",
            him->favfood, him->handle.first);

    return 0;
}