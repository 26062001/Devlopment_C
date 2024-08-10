#include<stdio.h>

int Decimal_Binary(int iNo)
{
	int iPower=1,iRet=0,iDigit=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%2;
		iRet=(iDigit*iPower)+iRet;
		iPower=iPower*10;
		iNo=iNo/2;
	}
	return iRet;
}


int Binary_Decimal(int iNo)
{
	int iPower=1,iRet=0,iDigit=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRet=(iDigit*iPower)+iRet;
		iPower=iPower*2;
		iNo=iNo/10;
	}
	return iRet;
}

int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	
	printf("Enter the Decimal Number\n");
	scanf("%d",&iValue1);
	
	printf("Enter the Binary Number\n");
	scanf("%d",&iValue2);
	
	iRet=Decimal_Binary(iValue1);
	printf("%d Binary Number is:%d\t",iValue1,iRet);
	
	printf("\n");
	int iRet1=Binary_Decimal(iValue2);
	printf("%d Decimal Number is:%d\t",iValue2,iRet1);
	
	return 0;
}
	
