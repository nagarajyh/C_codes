#include<stdio.h>
#include<stdlib.h>
void read(int A[10][10], int n);
void display(int A[10][10], int n);
void PDE(int A[10][10], int n);
int prime(int n);
int main()
{
    int A[10][10],n;
    printf("Enter n :");
    scanf("%d",&n);
    if(n>0 && n<=10)
    {
        read(A,n);
        PDE(A,n);
    }
    else
        printf("Invalid");
    return 0;
}
void read(int A[10][10], int n)
{
    printf("Enter matrix :\n");
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
}
void display(int A[10][10], int n)
{
    printf("\n");
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return;
}
int prime(int n)
{
    if(n<=1)
        return 0;
    for(int i=2 ; i<n/2 ; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
void PDE(int A[10][10], int n)
{
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(i==j)
            {
                if(prime(A[i][j])==0)
                {
                    while(prime(A[i][j])==0)
                    {
                        A[i][j]++;
                    }
                }
            }
            else
                A[i][j]=0;
        }
    }
    display(A,n);
    return;
}
