#include<stdio.h>

int Perfect(int iNo)
{
	int iTemp=0,iCnt=0,iSum=0;
	iTemp=iNo;
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if(iNo%iCnt==0)
		{ 
			iSum=iSum+iCnt;
		}
	}
	return(iSum==iTemp);
}

int main()
{
	
	int Start=0,End=0;
	
	printf("Start\n");
	scanf("%d",&Start);
	printf("End\n");
	scanf("%d",&End);
	
	for(int i=Start;i<=End;i++)
	{
		if( Perfect(i))
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}