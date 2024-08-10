//1 to 100 Even and odd Number list

#include<stdio.h>

int main()
{
	int Start=0,End=0;
	
	printf("Enter the Starting Limit\n");
	scanf("%d",&Start);
	printf("Enter the ENding Limit\n");
	scanf("%d",&End);
	int Count=0;
	printf("Even Number in the Entered Range in the Below\n");
	for(int iCnt=Start;iCnt<=End;iCnt++)
	{
		if(iCnt%2==0)
		{
			printf("%d\t",iCnt);
			Count++;
		}
	}
	printf("\n");
	printf("Number of Even Number in the Entered Range/Limit\n %d\n",Count);
}