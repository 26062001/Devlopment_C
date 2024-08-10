#include<stdio.h>
#include<stdlib.h>

void ArrayDisplay(int iSize,int Arr[])
{
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("%d\t",Arr[iCnt]);
	}
}


void ArrayDisplayReverse(int iSize,int Arr[])
{
	int iCnt=0;
	for(iCnt=iSize-1;iCnt>=0;iCnt--)
	{
		printf("%d\t",Arr[iCnt]);
	}
}
int main()
{
	int iLength=0,iCnt=0;
	int *ptr=NULL;
	
	printf("Enter the Number of Elements\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	printf("Enter the Elements\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Entered Element\n");
	ArrayDisplay(iLength,ptr);
	
	printf("\n");
	printf("Entered Elements Display iin Reverse Order\n");
	ArrayDisplayReverse(iLength,ptr);
	
	return 0;
}