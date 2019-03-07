#include <stdio.h>
#include <math.h>

void main(){
    float x;
    int n=1,count=0;
    double sum=x,term=x;
    //define
    printf("Input x:");
    scanf("%f",&x);
    sum=x;
    term=x;
    //input
    do{
        term=-term*x*x/((n + 1)*(n + 2));
        sum+=term;
        n+=2;
        count++;
    }while(fabs(term)>=1e-5);
    printf("sin(x)=%f,count=%d\n",sum,count);
}
