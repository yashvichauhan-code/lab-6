#include<stdio.h>
int main()
{
    int n, num, i;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d intergers: \n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest, second_largest;
    if (arr[0]>arr[2])
    {
        largest=arr[0];
        second_largest=arr[1];
    }
    else
    {
        largest=arr[1];
        second_largest=arr[0];
    }
    for (i=2; i<n; i++)
    {
        if (arr[i]>largest)
        {
            second_largest= largest;
            largest= arr[i];
        }
        else if(arr[i]> second_largest && arr[i]!=largest)
        {
            second_largest=arr[i];
        }
    }
    if (largest == second_largest) 
    {
        printf("No second largest\n");
    } else 
    {
        printf("Second largest is %d\n", second_largest);
    }
    return 0;
}