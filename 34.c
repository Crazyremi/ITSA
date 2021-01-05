#include<stdio.h>
int main()
{
    int h_1,sex;
    while(scanf("%d%d",&h_1,&sex))
    {
        if(sex==1)
        {
            float weight = (h_1-80)*0.7;
            printf("%.1f\n",weight);
        }
        else if(sex==2)
        {
            float weight = (h_1-70)*0.6;
            printf("%.1f",weight);
        }
        
    }
}