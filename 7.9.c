#include<stdio.h>
int main(void)
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;

    printf("Enter the first score (q to quit):");
    while (scanf("%f", &score) == 1)
    {
        if (score < MIN || score > MAX)
        {
            printf("%0.1f is an invalid value,try again:");
            continue;
        }
        printf("Accepting %0.1f:", score);
        min = (score < min)? score: min;
        max = (score > max)? score: max;
        total += score;
        n++;
        printf("Enter next score (q to quit):") 
    }
    if (n > 0)
    {
        printf("Averange of %d score is %0.1f.\n", min, max);
        printf("Low = %0.1f, high = %0.1f", min, max);
    }
    else
        printf("No valid scores were entered.\n");

    return 0;
}
