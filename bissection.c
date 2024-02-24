// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
#define f(x) cos(x) - x*exp(x) //defining a function

int main() {
float x0,x1,x2,f0,f1,f2,e;
int step=1;
printf("enter inital guesses\n");
scanf("%f%f",&x0,&x1);
printf("enter tolerable error\n");
scanf("%f",&e);
printf("steps\tx0\t\tx1\t\tx2\t\tf2\n");
do{
    x2=(x0+x1)/2; //formula for bissection methon
    f0=f(x0);
    f1=f(x1);
    f2=f(x2);
    if(f1*f2<0){
        x0=x2;
        f0=f2;
    } else{
         x1=x2;
        f1=f2;
    }
    step++;
    printf("%d\t%f\t%f\t%f\t%f\n",step,x0,x1,x2,f2);
    
    
}while(fabs(f2)>e);   
printf("error is %f",x2);

    return 0;
}
