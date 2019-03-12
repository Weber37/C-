#include <stdio.h>
#include <math.h>

void main(){
    int n,temp,i,j,k=1;
    printf("Input n:");
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        temp=k;
        for(i=1;i<=n-j+1;i++){
            printf("%5d",temp);
            temp+=i+j;
        }
        printf("\n");
        k=k+j;
    }
}
