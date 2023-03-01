#include<stdio.h>
main(){
	
	int i,n,*a;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	int x[n];
	
    printf("Enter the elements of an array : \n");
	 
	for(i=0; i<n; i++){
		
	 	printf("Value of [%d] : ",i);
	 	
		scanf("%d",&x[i]); 
						  
	}
	a=&x[0];
	
	 printf("The elements of the array are  : \n");
	 
	
	for(i=0; i<n; i++){
		
		printf("%d  \n",*(a+i));
	}
}
