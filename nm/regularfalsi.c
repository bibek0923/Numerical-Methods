#include <stdio.h>
#include <math.h>
#define f(x) cos(x) - x *exp(x)
int main()
{
    float x0, x1, x2, f0, f1, f2, e;
    int step = 1;
up:
    printf("enter initial guess , error\n");
    scanf("%f%f%f", &x0, &x1, &e);
    if (x0 * x1 > 0)
    {
        goto up;
    }
    else
    {
        do
        {
             x2 = x0- ((f0*(x0-x1))/(f0-f1));
           //  x2=((x0*f(x1))-(x1*f(x0)))/(f(x1)-f(x2));
            f0 = f(x0);
            f1 = f(x1);
            f2 = f(x2);
        
            if (f0 * f2 < 0)
            {
                x1 = x2;
                f1 = f2;
            }
            else
            {
                x0 = x2;
                f0 = f2;
            }
                        printf("%d\t%f\t%f\t%f\t%f\n", step, x0, x1, x2, f2);

            step++;
        } while (fabs(f2) > e);
        printf("root is %.3f", x2);
    }

    return 0;
}