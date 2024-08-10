#include<stdio.h>

int Calculate_Factorial(int iNo)
{
	int iCnt=0,iFact=1;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iFact=iFact*iCnt;
	}
	return iFact;
}
int main()
{
	int iValue=0,iFact=1,iCnt=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	if(iValue<0)
	{
		iValue=(-iValue);
	}
	else if(iValue==0)
	{
		return 0;
	}
	
	
	{
		
		for(iCnt=1;iCnt<=iValue;iCnt++)
		{
			iFact=iFact*iCnt;
		}
		printf("Factorial is:%d\t",iFact);

		//By using Function
		printf("\n");
		int Factorial=Calculate_Factorial(iValue);
		printf("Factorial is:%d\t",Factorial);
	}
		return 0;
}