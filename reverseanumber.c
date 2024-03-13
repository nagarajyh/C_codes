#include<stdio.h>
void reverse(int a);
main()
{
    int a;
    /*printf("Enter a  number :");
    scanf("%d",&a);*/
    int i;
    printf("Random Numbers Are:\n");
    a=rand();
    for(i=0;i<1;i++)
    {
        printf("%d\n",a);
    }
    reverse(a);

}
void reverse(int a)
{
    int x=0;
    while(a!=0)
    {
        x=a%10;
        printf("%d",x);
        a=a/10;
    }



}
