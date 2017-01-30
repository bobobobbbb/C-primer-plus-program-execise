#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main(void)
{
    char c;
    char prev;
    long n_char = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    bool inword = false;

    printf("Enter some paragraph(terminate by '|'):\n");
    while ((c = getchar()) != '|')
    {
        n_char++;
        if (c == '\n') 
            n_lines++;
        if (!inword && !isspace(c))
        {
            inword = true;
            n_words++;
        } 
        if (inword && isspace(c))
            inword = false;
        prev = c; 
    }
    if (prev != '\n')
        p_lines++;
    printf("characters = %ld,word = %d, lines = %d, partial lines = %d",
            n_char, n_words, n_lines, p_lines);

    return 0;


}
