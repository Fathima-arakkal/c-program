#include<stdio.h>
int main()
{
	int r1,c1,r2,c2;
	printf("Enter the number of rows in 1st matrix.:\n");
	scanf("%d",&r1);
	printf("Enter the number of columns in 1st matrix.:\n");
	scanf("%d",&c1);
	printf("Enter the number of rows in 2nd matrix.:\n");
	scanf("%d",&r2);
	printf("Enter the number of columns in 2nd matrix.:\n");
	scanf("%d",&c2);
	if(r1==r2 && c1==c2)
	{
		int m1[r1][c1];
		int m2[r2][c2];
		int R[r2][c2];
		int i,j;
		printf("\n Enter the 1st matrix.:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&m1[i][j]);
			}
		}
		printf("\n Enter the 2nd matrix.:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&m2[i][j]);
			}
		}
			for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
			 R[i][j] =m1[i][j]+m2[i][j];
			}
		}
		printf("\n Added matrix.:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
			 printf("\t%d",R[i][j]);
			}
				printf("\n");
				for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
			 R[i][j] =m1[i][j]-m2[i][j];
			}
		}
		printf("\n Subtracted matrix.:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
			 printf("\t%d",R[i][j]);
			}
			
			printf("\n");
		}
	}
}
	else
	{
		printf("\n Addition not possible");
	}
	
}