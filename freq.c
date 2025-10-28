#include<stdio.h>
int main()
{
    int n, num, freq=0, i;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d integers: \n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter num whose frequency is to be found: ");
    scanf("%d", &num);
    for (i=0; i<n; i++)
    {
        if (arr[i]==num)
        {
            freq++;
        }
    }
    printf("frequency of %d is %d\n", num, freq);
    return 0;
}