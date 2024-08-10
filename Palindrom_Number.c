#include<stdio.h>
#include<stdbool.h>

bool Chk_Palindrom(int iNo)
{
	int iDigit=0,iRev=0,iTemp=0;
	iTemp=iNo;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	printf("%d Reverse Number is equal to Orignal Number %d\n",iRev,iTemp);
	if(iTemp==iRev)
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
	
	printf("Enter the Number to Check Number is Palindrom or Not\n");
	scanf("%d",&iValue);
	
	bRet=Chk_Palindrom(iValue);
	if(bRet==true)
	{
		printf("Number is Palindrom\n");
	}
	else
	{
		printf("Number is not Palindrom\n");
	}
	
	return 0;
}