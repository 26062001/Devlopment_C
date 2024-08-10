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

int Array_Max(int Arr[],int iSize)
{
	int iCnt=0,iMax=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		}
	}
	return iMax;
}

int Array_Min(int Arr[],int iSize)
{
	int iCnt=0,iMin=0;
	iMin=Arr[0];
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]<iMin)
		{
			iMin=Arr[iCnt];
		}
	}
	return iMin;

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
	
	int Minimum=Array_Min(ptr,iLength);
	printf("Minimum Element in Arry is:%d\t",Minimum);
	
	int Maximum=Array_Max(ptr,iLength);
	printf("\nMaximum Element in Arry is:%d\t",Maximum);
	
	int Diff=Maximum-Minimum;
	printf("\nThe Differance between Maximum and Minimum:%d\t",Diff);
	
	return 0;
}