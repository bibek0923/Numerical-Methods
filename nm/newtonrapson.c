#include<stdio.h>
#include<math.h>
#define f(x)  cos(x) - x*exp(x)

#define g(x) -sin(x) -x*exp(x) - exp(x)
int main (){
    float x0,x1,f0,g0,e;
    int i=1,itr;
  up:
    printf("enter guess , max iteration , tolerable\n");
    scanf("%f%d %f", &x0 , &itr, &e);
    printf("x0\t\tx1\t\tf0\n");
    g0=g(x0);
    if(g0==0){
        goto up;
    } else{
          do {
               x1=x0-(f0/g0);
               
             x0=x1;
             f0=f(x0);
             g0=g(x0);
             i++;
             printf("%f\t%f\t%f\n",x0,x1,f0);
          }while(fabs(f0)>e || i<itr);

    }
    printf("root is %f", x1);
    return 0;
}