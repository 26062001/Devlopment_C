#include<stdio.h>

int main()
{
	int iValue=0,iCnt=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	if(iValue<0)
	{
		return 0;
	}
	
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		if(iValue%iCnt==0)
		{
			printf("%d\t",iCnt);
		}
	}
	
	return 0;
}