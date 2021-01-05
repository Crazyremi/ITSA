#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a))
    {   
        for(int i=1;i<=a;i++)
        {
            if(i%5==0&&i%7==0)
            {
                printf("%d ",i);
            }
        }
        printf("\n");
    }
}