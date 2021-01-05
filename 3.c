#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    double dist = sqrt(x*x + y*y);
    if(dist <= 100)
        printf("inside\n");
    else
    {
        printf("outside\n");
    }
    
}