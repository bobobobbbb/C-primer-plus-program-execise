#include<stdio.h>
#define 
int main(void)
{
    const float BS = 10.00f;
    const int TL = 40; //40 hours   
    int at; //actually time
    float salary;//sum salary
    float tax;
    float net;//net income

    printf("Enter how many hours you work:");
    scanf("%f",&at);
    if ( at <= 40)
    {
        salary = at * BS;      
    }
    else
    {
        salary = 40 * BS + (at - 40) * BS;
    }
    if (salary <= 300)
    {
        tax = salary * 0.15;
    }
    else if (salary <= 450)
    {
        tax = 300 * 0.15 + (salary - 300) * 0.20;
    }
    else
    {
        tax = 300 * 0.15 + 150 * 0.2 + (salary - 450) * 0.25;
    }
    net = salary - tax;
    printf("%.2f %.2f %.2f", salary, tax, net);

    return 0;   
}
