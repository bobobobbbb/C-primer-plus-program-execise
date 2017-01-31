#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
void menu(void);
int main(void)
{
    int option;
    float per_hr;
    bool pms = false;

    menu();
    while (scanf("%d", &option) == 1)
    {
        switch(option)
        {
        case 1:
            per_hr = 8.75;
            pms = true;
            break;
        case 2:
            per_hr = 9.33;
            pms = true;
            break;
        case 3:
            per_hr = 10.00;
            pms = true;
            break;
        case 4:
            per_hr = 11.20;
            pms = true;
            break;
        case 5:
            exit(1);
        default: 
            printf("Wrong input, try again:");
            break;
        }
        if (pms == false)
        {
            menu();
            continue;
        }
        else
        {
            break;
        }

    }
    //和第七题的一模一样这里不赘述
}
void menu(void)
{
    char prompt[100];
    int length,i = 0;
    
    strcpy(prompt, "Enter the number corresponding to the desired pay rate or action:");
    length = strlen(prompt);    
    while (i <= length)
    {
        i++;
        printf("*");
    }
    printf("\n");
    printf("%s\n", prompt);
    printf("1) $8.75/hr                             2) $9.33/hr\n");
    printf("3) $10.00/hr                            4) $11.20/hr\n");
    printf("5) quit\n");
    i = 0;
    while (i <= length)
    {
        i++;
        printf("*");

    }
    printf("\n");
}
