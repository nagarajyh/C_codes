#include<stdio.h>
void read(int a[100],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i] = rand() % 100 + 10;
        printf("%d\n", a[i]);
    }
}
void display(int a[100],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void bubblesort(int a[100],int n)
{   int i,j,temp;
printf("\n");
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
main()
{
    int a[100],n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    bubblesort(a,n);
}
