#include<stdio.h>
#include<conio.h>
#define N 10
main()
{
	int count;
	float sum,average,number;
	sum=0;
	count=0;
	while(count<N)
	{
	printf("Enter any Number\n");
	scanf("%f",&number);
	count=count+1;
	sum=sum+number;


	}
	average=sum/N;
	printf("N=%d sum=%f",N,sum);
	printf("Average=%f",average);
	getch();
}
