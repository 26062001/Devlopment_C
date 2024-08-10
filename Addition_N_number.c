#include<stdio.h>

int Addition_N(int iNo)
{
	int iCnt=0,iSum=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}
int main()
{
	int iValue=0,iCnt=0,iSum=0;
	
	printf("Enter the Limit\n");
	scanf("%d",&iValue);
	if(iValue<0)
	{
		iValue=(-iValue);
	}
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	
	printf("Addition of N Number is:%d\t",iSum);
	
	printf("\n");
	
	//By Using Function
	
	int Add=Addition_N(iValue);
	printf("Addition of N Number is:%d\t",Add);
	return 0;
}