#include<stdio.h>

int ReverseNumber(int iNo)
{
	int iRev=0,iDigit=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	return iRev;
}
int main()
{
	int iValue=0;
	
	printf("Enter the Number to Reverse Number\n");
	scanf("%d",&iValue);
	
	int Reveras=ReverseNumber(iValue);
	printf("%d Reverse Number is:%d\n",iValue,Reveras);
	return 0;
}