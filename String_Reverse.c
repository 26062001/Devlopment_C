#include<stdio.h>
#include<string.h>

int CountLength(char Arr[])
{
		int iCnt=0;
		while(Arr[iCnt])
		{
			iCnt++;
		}
		return iCnt;
}

void Reverse(char Arr[],int iSize)
{
	int iCnt=0;
	for(iCnt=iSize;iCnt>=0;iCnt--)
	{
		printf("%c",Arr[iCnt]);
	}
}
int main()
{
		char Name[500];
		printf("Enter the String\n");
		scanf("%[^\n]c",Name);
		
		printf("Strin is: %s",Name);

		printf("\n");
		int iLength=CountLength(Name);
		printf("String Length is:%d\t",iLength);
		printf("\n");
		Reverse(Name,iLength);
		
		return 0;
}