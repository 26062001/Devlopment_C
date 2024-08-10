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

int Palindrom(int iSize,char Arr[])
{
	int iStart=0,iEnd=0;
	iEnd=iSize-1;
	
	while(iStart<iEnd)
	{
		if(Arr[iStart]==Arr[iEnd])
		{
			printf("String is  Palindrom\n");
			return -1;
		}
		iStart++;
		iEnd--;
	}
	printf("String is not Palindrom");
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
		
		int iRet=Palindrom(iLength,Name);
		
		return 0;
}