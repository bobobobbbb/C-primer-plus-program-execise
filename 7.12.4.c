#include <stdio.h>
 
int main(void)
{
    char ch;
    int a = 0, b = 0;
 
    printf("请输入字符串，以“#”结束: \n");
    while ((ch = getchar()) != '#')
    {
            if (ch == '.')
            {
                        putchar('!');
                        a++;
                    }
            else
            {
                        if (ch == '!')
                        {
                                        putchar('!');
                                        putchar('!');
                                        b++;
                                    }
                        else
                        {
                                        putchar(ch);
                                    }
                    }
        }
    printf("\n");
    printf("'.'有%d次被替代为'!'\n", a);
    printf("'!'有%d次被替代为'!!'\n", b);
    printf("总共替代了%d次\n", a + b);
 
    return 0;
}

