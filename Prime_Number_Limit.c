#include<stdio.h>
#include<stdbool.h>

int Prime_Number_Range(int Start,int End)
{
	int i=0,iCnt=0,iTemp=0, Count=0;
	for(i=Start;i<=End;i++)
	{
	
		for(iCnt=Start;iCnt<=End;iCnt++)
		{
			iTemp=i;
			
			if(i%iCnt==0)
			{
				
				break;
			}
		}
		if((iTemp==iCnt)||(iTemp==1))
		{
			Count++;
			printf("%d\t",iTemp);
		}
	}
	return Count;

}
int main()
{
	int Start=0,End=0;
	
	printf("Enter the Starting Limit\n");
	scanf("%d",&Start);
	
	printf("Enter the Ending Limit\n");
	scanf("%d",&End);
	
	int Count=Prime_Number_Range(Start,End);
	printf("\n");
	printf("In the Range Prime Number Count is %d\t",Count);
	return 0;
}