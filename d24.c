#include <stdio.h>
void read(int a[10][10],int r,int c);
void display(int a[10][10],int r,int c);
void sum(int a[10][10],int r,int c);
int main(){
  int a[10][10],r,c;
  printf("Enter the number of Sellers and Days:");
  scanf("%d%d",&r,&c);
  read(a,r,c);
  display(a,r,c);
  sum(a,r,c);

  return 0;
}
void read(int a[10][10],int r,int c){
  int i,j;
  printf("Enter the elements of Table:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&a[i][j]);
    }
  }

}

void display(int a[10][10],int r,int c){
  int i,j;
  printf("The elements of Table are:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
}
void sum(int a[10][10],int r,int c){
  int i,j,max;
  for(i=0;i<r;i++){
   int sum=0;
    for(j=0;j<c;j++){
        sum=sum+a[i][j];
    }
    int avg=sum/c;
    printf("s%d %d\n",i+1,avg);

  }
  for(i=0;i<c;i++){
    max=a[0][i];
    for(j=0;j<r;j++){
      if(max<a[j][i]){
        max=a[j][i];
      }
    }
    printf("day%d %d\n",i+1,max);

  }

}
