#include<stdio.h>
#include<stdbool.h>

bool DigitAddition_Even_Odd(int iNo)
{
	int iDigit=0,iSum=0,iTemp=0;
	iTemp=iNo;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
	}
	printf("%d Digit Addition is=%d\n",iTemp,iSum);
	if(iSum%2==0)
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
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	bool bRet=DigitAddition_Even_Odd(iValue);
	if(bRet==true)
	{
		printf("Digit Addition is Even\n");
	}
	else
	{
		printf("Digit Addition is Odd\n");
	}
	
	return 0;
}