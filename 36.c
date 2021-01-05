#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if((n%4==0 && n%100!=0) || (n%400==0))
            printf("Bissextile Year\n");
        else 
            printf("Common Year\n");
    }
}