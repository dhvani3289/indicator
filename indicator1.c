#include<stdio.h>
main(){
	
	int a,b;

	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);

	int *c,*d,e;
	c=&a;  
	d=&b;  
	                     
   	e = *c;                                
   	*c = *d;
   	*d =  e;
	
	printf("\nThe swapped numbers are : \n");
	printf("The value of first no. is :%d \n",*c);
	printf("The value of second no. is :%d ",*d);
}

