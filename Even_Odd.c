#include<stdio.h>

int main()
{
	int iValue=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	if(iValue%2==0)
	{
		printf("%d Number is Even\n",iValue);
	}
	else
	{
		printf("%d Number is Odd\n",iValue);
	}
	
	return 0;
}