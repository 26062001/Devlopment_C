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
void Search_Key(int iSize,int Arr[],int Key)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]==Key)
		{
			printf(" Key is Found in Index Number is:%d\t",iCnt);
		}
	}
}
int main()
{
	int iLength=0,iCnt=0,Key=0;
	int *ptr=NULL;
	
	printf("Enter the number of Elements\n");
	scanf("%d",&iLength);
	
	printf("Enter the Key to Search\n");
	scanf("%d",&Key);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	printf("Enter the Elements\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	printf("Entered Elements\n");
	ArrayDisplay(ptr,iLength);
	
	Search_Key(iLength,ptr,Key);
	
	
	
	return 0;
}