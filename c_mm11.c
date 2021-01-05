#include<stdio.h>
int main()
{
    int rest;
    scanf("%d",&rest);
    int count1=0, count2=0, count3=0;
    while(rest>0)
    {
        while(rest>=10)
        {
            rest -=10;
            count3++;
        }
        while(rest>=5)
        {
            rest -= 5;
            count2++;
        }
        while (rest>=1)
        {
            rest -= 1;
            count1++;
        }
    }
    printf("NT10=%d\nNT5=%d\nNT1=%d\n",count3,count2,count1);
}