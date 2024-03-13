#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node*link;
};
struct node* create_node()
{
 struct node*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    if(new_node==NULL)
        printf("error");
    else
    {
        scanf("%d",&new_node->num);
        new_node->link=NULL;
    }
    return new_node; 
    
}
struct node* push(struct node* head,struct node*new_node)
{
    if(head==NULL)
        head=new_node;
    else
    {
        new_node->link=head;
        head=new_node;
    
        
    }
    return head;
    
    
}
struct node* pop(struct node* head)
{struct node* cur=NULL;

    if(head==NULL)
        printf("list empty\n");
    else if(head->link==NULL)
    {
       
       free(head);
           head=NULL;
    }
    else
    {
        cur=head;
        head=head->link;
        free(cur);
    }
        
    
    return head;
        
}
void count_coupons(struct node*head,int m)
{int cw=0,cl=0;
    while(head!=NULL)
    {
        if(head->num%m==0)
        {
            printf("W ");
            cw++;
        }
        else
        {
            printf("L ");
            cl++;
        }
        head=pop(head);
    }
 printf("\nNo of winners=%d\n",cw);
 printf("No of losers=%d\n",cl);
 
}


int main() {
    struct node*head=NULL,*new_node=NULL;
    int m,n;
    scanf("%d%d",&n,&m);
    if(n>1)
    {
    for(int i=0;i<n;i++)
    {new_node=create_node();
        head=push(head,new_node);
        
    }
    count_coupons(head,m);}
    else
        printf("Invalid number of customers");
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
