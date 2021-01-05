#include<stdio.h>
int main()
{
    int top,bottom,height;
    while(scanf("%d%d%d",&top,&bottom,&height))
    {
        printf("Trapezoid area:%.1f\n",(top+bottom)*height/2.0);
    }
    
}