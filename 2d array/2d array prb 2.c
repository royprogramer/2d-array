//wap that will take m by n matrix and then print row wise and colum wise
#include<stdio.h>
int main()
{
int m,n,i,j;
printf("enter the value of m and n");
scanf("%d%d",&m,&n);
int a[m][n];

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("row wise");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);
}

}
printf("column wise");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d ",a[j][i]);
}
}
return 0;
}

