#include<stdio.h>

int Digit_Sum(int iNo)
{
	int iSum=0,iDigit=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
	}
	return iSum;
}
int main()
{
	int Value=0,iSum=0;
	
	printf("Enter the Number\n");
	scanf("%d",&Value);
	
	iSum=Digit_Sum(Value);
	printf("%d Digit Sum is=%d\n",Value,iSum);
	
	return 0;
}
