#include<stdio.h>
#define f(x) 1/(1+pow(x,2))
int main(){
    int i;
    float upper, lower,stepsize,subint , ans ,i,k1,k;
    printf("enter upper and lower limit\n");
    scanf("%f%f",&upper,&lower);
    printf("enter subint\n");
    scanf("%f",&subint);
    stepsize=(upper-lower)/subint;
    ans=f(upper)+f(lower);
    for (i=1;i<=subint-1;i++){
         k =lower+i*stepsize;
        if(i%3==0){
            k1=k1+ 2*(f(k));
        }
        else {
            k1=k1+3*f(k);
        }
     
      printf("%f",k);

    }
    ans = ans + ((3*stepsize)/8 )*k1;
    printf("\nans = %f",ans);


return 0;
}