#include<stdio.h>

int Digit_Count(int iNo)
{
	int iDigit=0,Count=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		Count++;
		iNo=iNo/10;
	}
	return Count;
}
int main()
{
	int iValue=0;
	
	printf("Enter the Number to Count the Digit\n");
	scanf("%d",&iValue);
	
	int Count=Digit_Count(iValue);
	printf("In the Entered Number ,Number of Digit found=%d",Count);
	
	return 0;
}