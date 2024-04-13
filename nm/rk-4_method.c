#include<stdio.h>
#include<math.h>
#define f(x,y) x+y
int main (){
    float x0,y0,h,n,i=0.0,xn,k1,k2,k3,k4,yn,k;
    printf("enter initial guesses\n");
   scanf("%f%f",&x0,&y0);
   printf(" \n enter total number of intervals \n ");
   scanf("%f",&n);
   printf("\nenter the point at which value is to be calculated\n");
   scanf("%f",&xn);
   h=(xn-x0)/n;
   printf(" int %f\n",h);
    for(i=0.0;i<n;i++){
        k1=h*f(x0,y0);
        k2=h*f((x0+h/2),(y0+k1/2));
        k3=h*f((x0+h/2),(y0+k2/2));
        k4=h*f(x0+h,y0+k3);
       k= (k1+2*k2+2*k3+k4)/6;
        yn=y0+k;
         printf("%f\t",yn);
        x0=x0+h;
        y0=yn;
        

    }
    printf("\nresult = %f",yn);
    return 0;
}