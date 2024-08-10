#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void Display(int iSize,int Arr[])
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("%d\t",Arr[iCnt]);
	}
	printf("\n");
}
void Sort(int iSize,int Arr[])
{
	int i=0,j=0,iTemp=0;
	for(i=0;i<iSize;i++)
	{
		for(j=i+1;j<iSize;j++)
		{
			if(Arr[i]>Arr[j])
			{
				iTemp=Arr[i];
				Arr[i]=Arr[j];
				Arr[j]=iTemp;
			}
		}
	}
}
int BinarySearch(int iSize,int Arr[],int Key)
{
	int iStart=0,iEnd=0,iMid=0;
	iEnd=iSize;
	
	
	
	while(iStart<=iEnd)
	{
		iMid=(iStart+(iEnd-iStart)/2);
		
		if(Key==Arr[iMid])
		{
			return iMid;
		}
		else if(Key>Arr[iMid])
		{
			iStart=iMid+1;
		}
		else
		{
			iEnd=iMid-1;
		}
		iStart++;
		iEnd--;
	}
	return -1;
}
int main()
{
	int iLength=0,iCnt=0,Key=0;
	int *ptr=NULL;
	
	printf("Enter the Number of Elemenets\n");
	scanf("%d",&iLength);
	
	printf("Enter the Key to Search\n");
	scanf("%d",&Key);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	printf("Enter the Elements\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Array Elements:\n");
	Display(iLength,ptr);
	
	Sort(iLength,ptr);
	printf("Sorted Array is:\n");
	Display(iLength,ptr);
	
	int iRet=BinarySearch(iLength,ptr,Key);
	if(iRet==-1)
	{
		printf("Key is not Found\n");
	}
	else
	{
		printf("Key is Found at Index number:%d\n",iRet);
	}
	return 0;
}