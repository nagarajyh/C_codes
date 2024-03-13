#include<stdlib.h>
#include<stdio.h>

void bubblesort(int a[100],int n)
{   int i,j,temp;
printf("\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    FILE *fp;
    fp=fopen("sort.txt","w");
    fprintf(fp,"sorted no :");
     for(i=0;i<n;i++)
    {
        fprintf(fp,"%d ",a[i]);
    }
    fclose(fp);
}
int main()
{
    int a[100];
    int n=10;
    FILE *fp;
    fp=fopen("number.txt","r");
    for(int i=0;i<10 && fscanf(fp,"%d",&a[i])==1;i++)
    {

    }
    fclose(fp);
    bubblesort(a,n);
    return 0;
}
/*#include <stdlib.h>
#include <stdio.h>

void bubblesort(int a[100], int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    FILE *fp;
    fp = fopen("sort.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file for writing\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%d ", a[i]);
    }

    fclose(fp);
}

int main()
{
    int a[100];
    FILE *fp;
    fp = fopen("number.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file for reading\n");
        return 1;
    }

    int n = 10;
    for (int i = 0; i < n && fscanf(fp, "%d", &a[i]) == 1; i++)
    {
        // Do nothing here, read the values into the array
    }

    fclose(fp);

    bubblesort(a, n);

    return 0;
}*/

