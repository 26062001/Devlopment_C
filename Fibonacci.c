#include<stdio.h>

int main()
{
	int Start=0,Next=1,Target=0,iValue=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	for(int iCnt=0;iCnt<=iValue;iCnt++)
	{
		
		Target=Start+Next;
		printf("%d\t",Target);
		Start=Next;
		Next=Target;
	}
}