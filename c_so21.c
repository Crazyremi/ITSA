#include <stdio.h>
#include <stdlib.h>
int cmp (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int size;
        scanf("%d",&size);
        int a[size];
        for(int j=0;j<size;j++)
        {
            scanf("%d",&a[j]);
        }
        qsort(a,size,sizeof(int),cmp);
        int ans = 0;
        for(int j=0;j<size/2;j++)
        {
            ans += a[size-j-1] - a[j];
        }
        printf("%d\n",ans);
    }
}