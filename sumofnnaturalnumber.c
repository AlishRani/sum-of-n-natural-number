#include<stdio.h>
int main()
{
    int n;
    int i=1;
    int s=0;
    printf("enter the value of n");
    scanf("%d",&n);
    if (i<=n){
        s=s+i;
        i=i+1;
    }
    else{
        printf("sorry not possible");
    }
    printf("sum of n natural number%d\n",s);
    return 0;
}
    
    