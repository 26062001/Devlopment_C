#include<stdio.h>

int main()
{
	int iValue=0,iCnt=0,i=0,Start=0,End=0;
	
	
	printf("Enter the number\n");
	scanf("%d",&iValue);

	for(iCnt=1;iCnt<=10;iCnt++)
	{
		int iMult=iValue*iCnt;
		printf("%d\n",iMult);
	}
}