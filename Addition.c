#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
	int Sum=iNo1+iNo2;
	
	return Sum;
}
int main()
{
	int iValue1=0,iValue2=0,iSum=0;
	
	printf("Enter the First Number\n");
	scanf("%d",&iValue1);
	
	printf("Enter the Second Number\n");
	scanf("%d",&iValue2);
	
	iSum=iValue1+iValue2;
	printf("Addition of Two Number is:%d\t",iSum);
	
	printf("\n");
	//By Using Function
	int Add=Addition(iValue1,iValue2);
	printf("Addition of Two Number is:%d\t",Add);
	
	return 0;
}