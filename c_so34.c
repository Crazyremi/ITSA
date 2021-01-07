#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a, const void* b)
{
    return (float*)a-(float*)b;
}
int main()
{
    int n;
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    qsort(a,n,sizeof(float),cmp);
    printf("%.2f\n",a[0]);
    printf("%.2f\n",a[n-1]);


}