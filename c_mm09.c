#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a))
    {   
        if(a>31)
        {
            printf("Value of more than 31\n");
            continue;
        }
        int ans=1;
        for(int i=0;i<a;i++)
        {
            ans*=2;
        }
        printf("%d\n",ans);

    }
}