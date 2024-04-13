#include<stdio.h>
#include<math.h>
#define f(x) 1/(1+pow(x,2))
int main (){
float lower,upper,integration ,numinterval,stepsize,k;
int i;
printf("enter lower and upper limit\n");
scanf("%f%f",&lower,&upper);
printf("enter number of subintervals\n");
scanf("%f",&numinterval);
integration = f(lower)+f(upper);
stepsize=(upper-lower)/numinterval;
for(i=1;i<=numinterval-1;i++){
    k=lower+i*stepsize;
  //  printf("%f\n",k);
  integration=integration+ 2*f(k);
}
integration=integration*stepsize/2;
printf("value is %f",integration);
    return 0;
}