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

int Array_Addition(int Arr[],int iSize)
{
	int iCnt=0,iSum=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iSum=Arr[iCnt]+iSum;
	}
	return iSum;

}

float Array_Avrage(int Sum,int iSize)
{
	float Avr=(Sum/iSize);
	
	return Avr;
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
	
	int Sum=Array_Addition(ptr,iLength);
	printf("Addition of All elements is:%d\t",Sum);
	
	float Avrage=Array_Avrage(Sum,iLength);
	printf("Avarge of Elemets is:%.2f\t",Avrage);
	
	return 0;
}