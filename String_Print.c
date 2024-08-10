#include<stdio.h>
#include<string.h>



int main()
{
		char Name[500];
		printf("Enter the String\n");
		scanf("%[^\n]c",Name);
		
		printf("Strin is: %s",Name);

		return 0;
}