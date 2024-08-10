#include<stdio.h>
#include<stdlib.h>
/*
***********************************************************
*		Call function at a Same time Insert_At_Pos  	  *										 
*		or Inset_At_Last								  *
*                                                         *
***********************************************************


*/
//Display Array
void DisplayArray(int iSize,int Arr[])
{
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("%d\t",Arr[iCnt]);
	}
	printf("\n");
}
//Insetr Element at any Position exception last index
/*void Insert_At_Pos(int iSize,int Arr[],int Index,int iNo)
{
		int iCnt=0;
		for(iCnt=iSize;iCnt>=Index;iCnt--)
		{
			Arr[iCnt+1]=Arr[iCnt];	
		}
		Arr[Index]=iNo;
}*/

//Insetr Element at Last
/*void Insert_At_Last(int iSize,int Arr[],int iNo)
{
		int iCnt=0;
		for(iCnt=0;iCnt<=iSize;iCnt++)
		{
				Arr[iSize]=iNo;
		}
	
}
*/
int main()
{
	int iLength=0,iCnt=0,Index=0,iValue=0;
	int *ptr=NULL;
	
	printf("Enter the Number of Elements\n");
	scanf("%d",&iLength);
	
	printf("Enter the Index for Add element this Postion\n");
	scanf("%d",&Index);
	
	printf("Enter the Number fo adding this Number\n");
	scanf("%d",&iValue);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	printf("Enter the Elements\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Befor Adding Element array is:\n");
	DisplayArray(iLength,ptr);
	
	Insert_At_Pos(iLength,ptr,Index,iValue);
	iLength=iLength+1;
	printf("After Adding Element array is:\n");
	DisplayArray(iLength,ptr);
	
	/*Insert_At_Last(iLength,ptr,iValue);
	iLength=iLength+1;
	printf("After Adding Element array is:\n");
	DisplayArray(iLength,ptr);
	*/
	return 0;
	
	
}