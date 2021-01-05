#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b))
    {   
        int ans=0;
        for(int i=a;i<=b;i++)
        {
            ans+=i;
        }
        printf("%d\n",ans);
    }
}