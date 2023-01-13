#include<stdio.h>
int factorial (int);
int main ()
{
	int a,fact;
	
	printf("Enter any number: ");
	scanf("%d",&a);
	
	fact=factorial (a);
	printf("Factorial value = %d\n",fact);
	return 0;
}
int factorial (int g)
{
	int f=1,i;
	
	for (i=g;i>=1;i--)
	    f=f*i;
	    
	    return (f);

}
