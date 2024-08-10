#include<stdio.h>
#include<stdbool.h>

bool Chk_Prime(int iNo)
{
	int iCnt=0,iTemp=0;
	iTemp=iNo;
	
	for(iCnt=2;iCnt<=iNo;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			break;
		}
	}
	if((iTemp==iCnt)||(iTemp==1))
	{
		return true;
	}
	else
	{
		return false;
	}
		
}

int main()
{
	int iValue=0;
	bool bRet=false;
	
	printf("Enter the Number to Check Number is Prime or Not\n");
	scanf("%d",&iValue);
	
	bRet=Chk_Prime(iValue);
	if(bRet==true)
	{
		printf("Number is Prime\n");
	}
	else
	{
		printf("Number is Not Prime\n");
	}
	
	return 0;
}