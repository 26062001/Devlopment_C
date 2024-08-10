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
int main()
{
		char Name[500];
		printf("Enter the String\n");
		scanf("%[^\n]c",Name);
		
		printf("Strin is: %s",Name);

		printf("\n");
		int iLength=CountLength(Name);
		printf("String Length is:%d\t",iLength);
		
		return 0;
}