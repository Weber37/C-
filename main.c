#include <stdio.h>
#include <math.h>

void main(){
    float x;
    int n=1,count=0;
    double sum,term;
    printf("Input x:");
    scanf("%f",&x);
    sum=x;
    term=x;
    do{
        term=-term*x*x/((n + 1)*(n + 2));
        sum+=term;
        n+=2;
        count++;
    }while(fabs(term)>=1e-5);
    printf("sin(x)=%f,count=%d\n",sum,count);
    /*使用泰勒公式sinx=x-x^3/3!+x^5/5!…计算sinx的值，输出结果并输出项数*/
