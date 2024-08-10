#include<stdio.h>
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

//Accending Order

void Sort(int iSize,int Arr[])
{
	int i=0,j=0;
	for(i=0;i<iSize;i++)
	{
		for(j=i+1;j<iSize;j++)
		{
			if(Arr[i]>Arr[j])
			{
				int iTemp=Arr[i];
				Arr[i]=Arr[j];
				Arr[j]=iTemp;
			}
		}
	}
}

//Decending Order
void Sort1(int iSize,int Arr[])
{
	int i=0,j=0;
	for(i=0;i<iSize;i++)
	{
		for(j=i+1;j<iSize;j++)
		{
			if(Arr[i]<Arr[j])
			{
				int iTemp=Arr[i];
				Arr[i]=Arr[j];
				Arr[j]=iTemp;
			}
		}
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
	
	printf("Befor Sorting Array is:\n");
	Display(iLength,ptr);
	
	Sort(iLength,ptr);
	
	printf("Array Sorted in Accending Order:\n");
	Display(iLength,ptr);
	
	Sort1(iLength,ptr);
	
	printf("Array Sorted in Decending Order:\n");
	Display(iLength,ptr);
	
	return 0;
}