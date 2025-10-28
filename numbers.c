#include<stdio.h>
int main()
{
    int n, pos=0, neg=0, odd=0, even=0;
    printf("num of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d integers: \n",n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if (arr[i]>0){
            pos++;
        }
        else if (arr[i]<0){
            neg++;
        }
        if (arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("positive: %d\n",pos);
    printf("negativ: %d\n",neg);
    printf("even: %d\n",even);
    printf("odd: %d\n",odd);
    return 0;
}