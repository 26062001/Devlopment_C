#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool Palindrom(int iSize,int Arr[])
{
	int i=0,j=0;
	j=iSize-1;
	
	while(i<j)
	{
		if(Arr[i]==Arr[j])
		{
			return true;
		}
		else
		{
			return false;
		}
		i++;
		j--;
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
	printf("\n");
	bool bRet=Palindrom(iLength,ptr);
	if(bRet==true)
	{
		printf("Array is Palindrom\n");
	}
	else
	{
		printf("Array is Not Palindrom\n");
	}
	return 0;
}