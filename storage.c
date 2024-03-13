#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


struct student
{
    char name[20];
    char srn[20];
    char Pname[20];
    int sem;
};
struct system
{
    struct student *stu;
    char Osym[20];
    double ram;
    double storage;
    char Pro[20];

};
void readD(struct system *p,int n);
double displayWind(struct system *p,int n);
void displayD(struct system *p,int n);


int main()
{
    struct system *p;
    int n;
    printf("enter n:\n");
    scanf("%d",&n);

    p=(struct system *)malloc(n*sizeof(struct system));
    readD(p,n);
    double d=displayWind(p,n);
    printf("Average RAM allocated for Windows10 Virtual machines:%lf gigabytes.",d);
    displayD(p,n);




    return 0;
}
double displayWind(struct system *p,int n)
           {
               int i;
               double sum=0;
               int c=0;
               for(i=0;i<n;i++)
               {
                   int e=strcasecmp(p[i].Osym,'Windows10');
                   if(e==0)
                   {
                       c++;
                       sum=sum+p[i].ram;
                   }
               }
               return sum/c;
           }



    void readD(struct system *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the details of student:\n");

        printf("Enter name: ");
        scanf("%s", p[i].stu->name);

        printf("Enter the srn: ");
        scanf("%s", p[i].stu->srn);

        printf("Enter the project name: ");
        scanf("%s", p[i].stu->Pname);

        printf("Enter the sem: ");
        scanf("%d", &p[i].stu->sem);

        printf("Enter the operating system: ");
        scanf("%s", p[i].Osym);

        printf("Enter the RAM of the PC: ");
        scanf("%lf", &p[i].ram);

        printf("Enter the storage capacity: ");
        scanf("%lf", &p[i].storage);

        printf("Enter the processor name: ");
        scanf("%s", p[i].Pro);

       p[i].stu = (struct student *)malloc(sizeof(struct student));  // Allocate memory for the student structure
    }
}


void displayD(struct system *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Name: %s\t", p[i].stu->name);
        printf("SRN: %s\t", p[i].stu->srn);
        printf("Project Name: %s\t", p[i].stu->Pname);
        printf("Semester: %d\t", p[i].stu->sem);
        printf("Operating System: %s\t", p[i].Osym);
        printf("RAM: %lf\t", p[i].ram);
        printf("Storage: %lf\t", p[i].storage);
        printf("Processor: %s\n", p[i].Pro);
    }
}

