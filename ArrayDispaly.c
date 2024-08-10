#include<stdio.h>
#include<stdlib.h>

void ArrayDisplay(int Arr[],int iSize)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("%d\t",Arr[iCnt]);
	}
	printf("\n");

}

int main()
{
	int iLength=0,iCnt=0;
	int *ptr=NULL;
	
	printf("Enter the number of Elements\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	printf("Enter the Elements\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	printf("Entered Elements\n");
	ArrayDisplay(ptr,iLength);
	
	return 0;
}