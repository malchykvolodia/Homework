#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,a,b,v = 0;
    printf("provide the number of items: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        printf("print element: ");
        scanf("%d", &arr[i]);
    }
    a = arr[0];
    b = arr[1];
    for(i = 0; i < n; i++)
    {
        if(a > arr[i])
        {
            a = arr[i];
            v = i;
        }
        else
            ;
    }
    for(i = 0; i <= (v-1); i++)
    {
        if(b > arr[i])
            b = arr[i];
        else
            ;
    }
    for(i = v+1; i < n; i++)
    {
        if(b > arr[i])
            b = arr[i];
        else
            ;
    }
    printf("res= %d ", a + b);

    return 0;
}
