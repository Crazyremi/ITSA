#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b))
    {
        if(a<=100&&b<=100)
            printf("inside\n");
        else  
            printf("outside\n");
    }
}