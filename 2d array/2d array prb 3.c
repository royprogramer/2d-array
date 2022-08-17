// WAP that will take inputs of a 3 by 3 matrix and then print the determinant of the matrix.
int main()
{
    int a[3][3],i,j;
    int det=0;
    printf("Enter the elements of the matrix:  ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    det=a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]))-a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0]))+a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0]));
    printf("The determinant of the matrix is:  %d",det);
    return 0;
}
