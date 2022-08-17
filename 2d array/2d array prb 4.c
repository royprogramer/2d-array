//wap that will take a matrix as input and then print the diagonal elements of the matrix
#include<stdio.h>
int main()
{
int a[10][10],i,j,n;
printf("enter the size of the matrix");
scanf("%d",&n);
printf("enter the elements of the matrix");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the diagonal elements of the matrix are");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
{
printf("%d",a[i][j]);
}
}
}
return 0;
}
