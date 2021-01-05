#include <stdio.h>
#include <stdlib.h>
int cmp (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int a;
    scanf("%d",&a);
    int arr[7] = {1, 6, 9, 23, 56, 95};
    arr[6] = a;
    qsort(arr, 7, sizeof(int), cmp);
    for(int i=0;i<7;i++)
        printf("%d ",arr[i]);
    printf("\n");
    
}