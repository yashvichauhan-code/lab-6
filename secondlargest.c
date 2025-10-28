//Write a C program to print the second largest integer in a list of integers.
#include <stdio.h>
int main()
{
    int num;
    printf("enter number of integers you want to input: ");
    scanf("%d", &num);
    int n[num];
    printf("enter %d integers\n",num);
    for (int i=0; i<=num; i++){
        scanf("%d", &n[i]);
    }
    int large, large2;
    if (n[0] > n[1]) {
        large = n[0];
        large2 = n[1];
    } 
    else {
        large = n[1];
        large2 = n[0];
    }
    for (int i=2; i<num; i++){
        if (n[i]>large){
            large2=large;
            large=n[i];
        }
        else if (n[i]>large2 && n[i]!=large){
            large2=n[i];
        }
    }
    printf("the largest num is %d\n", large);
    if (large==large2){
        printf("no largest");
    }
    else {
        printf("the second largest number is %d\n", large2);
    }
return 0;
}
