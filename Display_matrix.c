//Program to display a matrix on screen

#include <stdio.h>

void main()
{
int matrix[2][3]={12,15,18,9,16}, i, j;

printf("\nThe entered matrix is:\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t", matrix[i][j]);
}
printf("\n");
}
}


//Program to read a matrix of size M*N from user and display it on screen
#include <stdio.h>

#define M 2
#define N 4
void main() {
int matrix[M][N], i, j;

printf("\nEnter the matrix elements:\t");
for(i=0;i<M;i++)
{
for(j=0;j<N;j++)
{
scanf("%d", &matrix[i][j]);
}
}
printf("\nThe entered matrix is:\n");
for(i=0;i<M;i++)
{
for(j=0;j<N;j++)
{
printf("%d\t", matrix[i][j]);
}
printf("\n");
}
}






