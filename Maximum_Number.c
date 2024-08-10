#include<stdio.h>

int Max_of_Four(int iNo1,int iNo2,int iNo3,int iNo4)
{
		if((iNo1>iNo2)&&(iNo1>iNo3)&&(iNo1>iNo4))
		{
				return iNo1;
		}
		else if((iNo2>iNo1)&&(iNo2>iNo3)&&(iNo2>iNo4))
		{
				return iNo2;
		}
		else if((iNo3>iNo1)&&(iNo3>iNo2)&&(iNo3>iNo4))
		{
			return iNo3;
		}
		else 
		{
			return iNo4;
		}
}

int main()
{
		int iValue1=0,iValue2=0,iValue3=0,iValue4=0,iMax=0;
		
		printf("Enter the 1st Number\n");
		scanf("%d",&iValue1);
		
		printf("Enter the 2nd Number\n");
		scanf("%d",&iValue2);
		
		printf("Enter the 3rd Number\n");
		scanf("%d",&iValue3);
		
		printf("Enter the 4th Number\n");
		scanf("%d",&iValue4);
		
		 iMax=Max_of_Four(iValue1,iValue2,iValue3,iValue4);
		 printf("%d is a Maximum Number",iMax);
		 
}


//Maximum Number of Two Numbers
/*#include<stdio.h>

int Maximum_Num(int iNo1,int iNo2)
{
	if(iNo1>iNo2)
	{
		return iNo1;
	}
	else
	{
		return iNo2;
	}
}
int main()
{	
	int iValue1=0,iValue2=0;
	
	printf("Enter the First Number\n");
	scanf("%d",&iValue1);
	
	printf("Enter the Second Number\n");
	scanf("%d",&iValue2);
	
	int Maximum=Maximum_Num(iValue1,iValue2);
	printf("%d is Maximum Number ",Maximum);
	
	return 0;
}*/