#include <stdio.h>
void read(int a[10][10],int b[10][10],int r,int c);
void display(int a[10][10],int b[10][10],int r,int c);
void sum(int a[10][10],int b[10][10],int r,int c);
int main(){
  int a[10][10],b[10][10],r,c;
  printf("Enter the number of rows and columns:");
  scanf("%d%d",&r,&c);
  read(a,b,r,c);
  display(a,b,r,c);
  sum(a,b,r,c);

  return 0;
}
void read(int a[10][10],int b[10][10],int r,int c){
  int i,j;
  printf("Enter the elements of matrix A:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter the elements of matrix B:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&b[i][j]);
    }
  }
}

void display(int a[10][10],int b[10][10],int r,int c){
  int i,j;
  printf("The elements of matrix A are:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("The elements of matrix B are:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("%d ",b[i][j]);
    }
    printf("\n");
  }
}
void sum(int a[10][10],int b[10][10],int r,int c){
  int i,j,s[10][10];
  printf("The sum of the matrices is:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      s[i][j]=a[i][j]+b[i][j];
      printf("%d ",s[i][j]);
    }
    printf("\n");
  }

}
