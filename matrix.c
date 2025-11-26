//WAP that reads two matrices A (m x n) and B (p x q) and computes the product of A and B. 
#include<stdio.h>
int main()
{
    int m=2,n=2,p=2,q=1;
    printf("for FIRST matrix\n\n");
    printf("enter number of rows: \n");
    scanf("%d",&m);
    printf("enter number of coloumns: \n");
    scanf("%d",&n);
    printf("\nfor SECOND matrix\n\n");
    printf("enter number of rows: \n");
    scanf("%d",&p);
    printf("enter number of coloumns: \n");
    scanf("%d",&q);
    int mat1[m][n], mat2[p][q];
    if(n!=p){
        printf("\nmultiplication of the matrices is not possible");
    }
    else{
        printf("\nenter elements for matrix 1\n\n");
        for (int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("\n\nenter elements for matrix 2\n\n");
        for (int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                scanf("%d", &mat2[i][j]);
            }
        }
    }
    int product[m][q];
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            int sum=0; 
            for(int k=0; k<n; k++){
                sum+=mat1[i][k]*mat2[k][j];
                product[i][j]=sum;
            }
        }
    }
    printf("\n\n product matrix: \n\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}