#include<stdio.h>
#include<string.h>
int main(void)
{
    char list[40];
    int index,length;
    
    printf("Enter an word:");
    scanf("%s",list);
    length = strlen(list);
    for (index = length - 1;index >= 0;index--)
    {
        printf("%c",list[index]);      
    }
    return 0;
}
