#include<stdio.h>
#include<string.h>
int main()
{   
    char a[100];
    fgets(a,100,stdin);
    int n;
    scanf("%d",&n);
    for(int i=0;i<strlen(a);i++)
    {
        if((a[i]<=90 && a[i]>=65) || (a[i]<=122 && a[i]>=97))
        {
            if( (a[i]>88&&a[i]<=90) || (a[i]>120&&a[i]<=122))
                a[i] = a[i]+n-26;
            else
            {
                a[i] = (a[i]+n);
            }
            
        }
            
    }
    puts(a);
}