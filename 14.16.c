#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LEN 81
char * s_gets(char * st, int n);
char showmenu(void);
void eatline(void);
void ToUpper(char *);
void ToLower(char *);
void transposed(char *);
void Dummy(char *);
void show(V_FP_CHARP fp, char * str);
typedef void (* V_FP_CHARP)(char *);
V_FP_CHARP arpf[4] {ToLower, ToUpper, Transposed, Dummy}; //声明并初始化为一个函数指针的数组

int main(void)
{
    char line[LEN];
    char copy[LEN];
    char choice;
    V_FP_CHARP pfun;

    puts("Enter a string (empty to quit):");
    while (s_gets(line, LEN) != NULL && line[0] != '\0')
    {
        while ((choice = showmenu()) != 'n')
        {
            switch(choice)
            {
                case 'u': pfun = ToUpper; break;
                case 'l': pfun = ToLower; break;
                case 'o': pfun = Dummy; break;
                case 't': pfun = Transposed; break;
            }
            strcpy(copy, line);
            show(pfun, copy);
        }
        puts("Enter a next string (empty line to quit):");
    }
    puts("Bye!")

    return 0;
}
char showmenu(void)
{
    char ans;
    puts("Enter menu choice:");
    puts("u) uppercase l) lowercase");
    puts("t) transposed case o) origin case");
    puts("n) next string");
    ans = tolower(getchar());
    eatline();
    while (strchr("ulton", ans) == NULL)
    {
        puts("Please enter an u, l, t, o, or n:");
        ans = tolower(getchar());
        eatline();
    }
    return ans;
}

void eatline(void)
{
    while (getchar() != '\n')
        continue;
}

void show(V_FP_CHARP fp, char * str)
{
    (*fp)(str);
    puts(str);
}

void ToLower(char * str)
{
    *str = tolower(*str);
    str++;    
}

void ToUpper(char * str)
{
    *str = toupper(*str);
    str++;
}

void Transposed(char * str)
{
    if (islower(*str))
        *str = toupper(*str);
    else if (isupper(*str))
        *str = tolower(*str);
    str++;
}

void Dummy(char *)
{
    //Do nothing
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchar(st, '\n');
        if (fine)
            *find = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}