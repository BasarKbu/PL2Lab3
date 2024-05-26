#include<stdio.h>
//This program will compute the sum of numbers ex:1+2+3.....+n
int recursive(int x){
	
	if(x == 0)
	return 0;
	else
	return (x + recursive(x-1));	
	
	
}

int main(){
	int number,result;
	printf("Enter a number: \n"); scanf("%d",&number);
	result = recursive(number);
	printf("The result is:%d ",result);
	
	return 0;
}
