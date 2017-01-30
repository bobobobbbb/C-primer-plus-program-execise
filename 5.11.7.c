#include<stdio.h>
void cube_print(double x);
int main(void)
{
    double val;

    printf("Enter an double number:");
    sanf("%lf",&val);
    cube_print(val); 
    
    return 0;
}
void cube_print(double x)
{
    print("%.2g\n",val * val * val);

}
