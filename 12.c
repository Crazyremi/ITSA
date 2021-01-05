#include<stdio.h>
int f(int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 2;
    return f(n-1)+f(n/2);
}
int main()
{
    int n;
    scanf("%d",&n);
    n=f(n);
    printf("%d\n",n);
}