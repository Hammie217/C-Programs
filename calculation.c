#include<stdio.h>
#include <math.h>
#include<conio.h>
#include <string.h>
#include <windows.h>

int main(void)
{
	int i,dingy,operatorLocation,num1=0,num2=1,ii=0,length;
	char string[10];
	for(i=0;i<10;i++)
	{
		string[i]='\0';
	}
	char operators;
	printf("Enter calculation \n");
	scanf("%s",string);
	length = strlen(string);
	for(i=0;i<10;i++)
	{
		dingy = (int)string[i];
		if(dingy<48 && dingy>41)
		{
			operators = string[i];
			operatorLocation = i;
		}
	}
	char str[10];
	for(i=0;i<10;i++)
	{
		str[i]='\0';
	}
	for(i=0;i<operatorLocation;i++)
	{
		str[i]=string[i];
	}
	char str2[10];
		for(i=0;i<10;i++)
	{
		str2[i]='\0';
	}
	ii=0;
	for(i=operatorLocation+1;i<length;i++)
	{
		str2[ii]=string[i];
		ii++;
	}
	int len = strlen(str);

	for(i=0; i<len; i++)
	{
	
		num1 = num1 * 10 + ( str[i] - '0' );

	}
	
	len = strlen(str2);
	num2=0;
	for(i=0; i<len; i++)
	{
	
		num2 = num2 * 10 + ( str2[i] - '0' );

	}
	printf("%d %c %d =",num1, operators, num2);
	long int ans = 0;
	float answer =0;
	switch (operators)
	{
		case '+':
			ans = num1+num2;
			printf("%d", ans);
			break;
		case'*':
			ans = num1*num2;
			printf("%d", ans);
			break;
		case'-':
			ans = num1-num2;
			printf("%d", ans);
			break;
		case'/':
			answer =(float) num1/num2;
			printf("%g", answer);
			break;
		default:
			printf("Don't be a smartass cunt");
			break;
			
	}
	getch();
	return(0);    
}
