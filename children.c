#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct date
{
    int d,m,y;
};

struct children
{
    char name[20];
    char gender[20];
    struct date d1;
};
void checkDate(struct children *s,int n);
void displayDetails(struct children *s,int n);
void readDetails(struct children *s,int n);

int main()
{
    int n;
    printf("enter the no of application:\n");
    scanf("%d",&n);

    struct children *s;
    s=(struct children *)malloc(n*sizeof(struct children ));

    readDetails(s,n);
    displayDetails(s,n);

    printf("\n");
    printf("the students who are eligible for admission:\n");
    checkDate(s,n);
}

void readDetails(struct children *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the name of childd:\n");
        scanf("%s",s[i].name);

        printf("enter the gender of child:\n");
        scanf("%s",s[i].gender);

        printf("enter the DOB of child:\n");
        scanf("%d%*c",&s[i].d1.d);
        scanf("%d%*c",&s[i].d1.m);
        scanf("%d",&s[i].d1.y);
    }
}
void displayDetails(struct children *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nname:%s",s[i].name);
        printf("\ngender:%s",s[i].gender);
        printf("\nDOB is:");
        printf("%d-",s[i].d1.d);
        printf("%d-",s[i].d1.m);
        printf("%d",s[i].d1.y);
    }
}
void checkDate(struct children *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(s[i].d1.y < 2017)
            displayDetails(s+i,1);

        else if (s[i].d1.y==2017 && s[i].d1.m<3)
             displayDetails(s+i,1);

        else if (s[i].d1.m==3 && s[i].d1.d<=31)
            displayDetails(s+i,1);

    }

}
