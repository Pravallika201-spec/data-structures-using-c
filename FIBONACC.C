#include<stdio.h>
#include<conio.h>
int feb (int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return(fib(n-1)+fib(n-2));
}
int main()
{
int n,i;
printf("enter the number of n:");
scanf("%d",&n);
printf("fibonacci series:");
for(i=0;i<n;i++)
{
printf("%d\t",fib(i));
}
if(n==0)
return 0;
else if(n==1)
return 1;
else
return(fib(n-1)+fin(n-2));
}
int main()
{
int n,i;
printf("enter the value of n");
scanf("%d",&n);
printf("fibonaci series");
for(i=0;i<n;i++)
{
printf("%d\t",fib(i));
}
return o;
}