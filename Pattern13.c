#include<stdio.h>
/*
1 1 1 1 1
1 2 2 2 1
1 2 3 2 1
1 2 2 2 1
1 1 1 1 1

*/
void Display(int iRow,int iCol)
{
	int i=0,j=0;
	int Count=1;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==1)||(j==1)||(i==iRow)||(j==iCol))
			{
				printf("1 ");
			}
			else if((i==2)||(j==2)||(i==iRow-1)||(j==iCol-1))
			{
				printf("2 ");
		
			}
			else if((i==3)||(j==3)||(i==iRow-3)||(j==iCol-3))
			{
				printf("3 ");
				
			}
		}
		Count++;
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter Number of Rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter Number of Columns\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}