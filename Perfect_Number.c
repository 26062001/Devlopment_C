#include<stdio.h>
#include<stdbool.h>

int Factor_Sum(int iNo)
{
	int iCnt=0,iSum=0;
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}
int main()
{
	int iValue=0,iSum=0;
	bool bRet=false;
	
	printf("Enter the Number to Check Number is Perfect or Not\n");
	scanf("%d",&iValue);
	
	int Fact_Sum=Factor_Sum(iValue);
	printf("Factors Sum is: %d\t",Fact_Sum);
	printf("\n");
	
	if(iValue==Fact_Sum)
	{
		printf("Number Perfect\n");
	}
	else
	{
		printf("Number Not Perfect\n");
	}
	
	
	return 0;
}