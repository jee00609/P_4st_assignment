#include <stdio.h>
 
int main()
{
    int a[10][10];
	int b[10][10];
	int result[10][10];
	int c=0;
	int r1, c1;
	int r2, c2;
	int i;
	int j;
	int k;
 
    printf("Enter rows and column for first matrix:\n");
    scanf("%d %d", &r1, &c1);
 
    printf("Enter rows and column for second matrix:\n");
    scanf("%d %d",&r2, &c2);
 
    // Column of first matrix should be equal to column of second matrix
    
	while (c1 != r2)
    {
        printf("Error! column of first matrix not equal to row of second.\n\n");
        printf("Enter rows and column for first matrix:\n");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and column for second matrix:\n");
        scanf("%d %d",&r2, &c2);
    }
 
    // !!!!!!!!Storing elements of first matrix.
    printf("\nEnter elements of matrix 1:\n");
    // Fill the necessary program here.
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Enter element a%d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
    // Storing elements of second matrix.
    printf("\nEnter elements of matrix 2:\n");
	// Fill the necessary program here.
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("Enter element a%d%d:",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
 
 
    // Initializing all elements of result matrix to 0
    // Fill the necessary program here.
 
 
	/*
	[a11 = 1][a12 = 2][a13 = 3]      [b11 = 4][b12 = 5]                 
	[a21 = 3][a22 = 2][a23 = 1]      [b21 = 6][b22 = 6]    
	                                 [b31 = 5][b32 = 4]  
 
 
	[(a11*b11)+(a12*b21)+(a13*b31)][]
	[][]
	
 
	*/
 
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c=0;
			for(k=0;k<c1;k++)
			{
				c+=a[i][k]*b[k][j];
			
			}
			result[i][j]=c;
			
		}
	}

	/*result[i][j]에 바로 a[i][k]*b[k][j]를 곱하면 잘못된 값이 나와 c라는 새로운 0의 변수에 누적해서 더했습니다
	  또한 세번째 반복문 이후에 새롭게 0으로 초기화 하면서 계속 누적되있던 예전값을 지워줌으로써 문제를 해결했습니다.
	  그러나 아직까진 result[i][j]에 바로 a[i][k]*b[k][j]를 곱하면 안되는 지가 궁금합니다.*/


 
    // Multiplying matrices a and b and
    // storing result in result matrix
    // Fill the necessary program here.
 
    // Displaying the result
    // Fill the necessary program here.
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d    ",result[i][j]);
			if(j==c2-1)
			{
				printf("\n\n");
			}
		}
	}
 
    return 0;
}