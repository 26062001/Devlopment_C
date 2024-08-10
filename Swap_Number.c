#include<stdio.h>
//Using Temp 
void Swap(int iNo1,int iNo2)
{
	int iTemp=0;
	iTemp=iNo1;
	iNo1=iNo2;
	iNo2=iTemp;
	
	printf("After Swaping Number is %d\t%d\n",iNo1,iNo2);
	
}

//Without Using Temp

void Swap1(int iNo1,int iNo2)
{
		iNo2=iNo1+iNo2; //32=11+21
		iNo1=iNo2-iNo1; //21=32-11
		iNo2=iNo2-iNo1;//11=32-21
		
		printf("After Swaping Number is %d\t%d\n",iNo1,iNo2);
}

	//EOR Opreator Using

void Swap2(int iNo1,int iNo2)
{
	iNo2=iNo1^iNo2;
	iNo1=iNo1^iNo2;
	iNo2=iNo1^iNo2;
	
	printf("After Swaping Number is %d\t%d\n",iNo1,iNo2);
}
int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the First Number\n");
	scanf("%d",&iValue1);
	
	printf("Enter the Second Number is\n");
	scanf("%d",&iValue2);
	
	printf("Before Swaping Number is %d\t%d\n",iValue1,iValue2);
	//Swap Number using Thrid Number
	
	Swap(iValue1,iValue2);
	//Without Using Temp
	printf("Before Swaping Number is %d\t%d\n",iValue1,iValue2);
	Swap1(iValue1,iValue2);
	//EOR Opreator Using
	printf("Before Swaping Number is %d\t%d\n",iValue1,iValue2);
	Swap2(iValue1,iValue2);
	
	
	return 0;
}