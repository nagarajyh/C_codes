#include<stdlib.h>
#include<stdio.h>

struct student
{
    char * name;
    int rno;

};
void displaystd(struct student *s,int n);
void readstd(struct student *s,int n);
int main()
{
    struct student *s;
    int n;
    printf("enter n:");
    scanf("%d",&n);

    s=(struct student *)malloc(sizeof(struct student)*n);
    readstd(s,n);
    displaystd(s,n);

    free(s);
    s=NULL;


}
void readstd(struct student *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        char str[20];
        printf("enter name:\n");
        scanf("%s",str);
        s[i].name=(char *)malloc(sizeof(strlen(str)+1));
        strcpy(s[i].name,str);

        printf("ebter rno:");
        scanf("%d",&s[i].rno);

    }
}
void displaystd(struct student *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("name:%s\n",s[i].name);
        printf("rno:%d\n",s[i].rno);
    }
}
