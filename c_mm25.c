#include<stdio.h>
int main()
{   
    int a;
    while(scanf("%d",&a))
    {   
        int ans=0;
        for(int i=1;i<=a;i++)
        {
            if(i%3==0)
                ans+=i;
        }
        printf("%d\n",ans);
    }
}