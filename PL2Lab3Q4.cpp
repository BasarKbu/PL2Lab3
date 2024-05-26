#include<stdio.h>
//Using the two positive numbers given in the main function,
//find the largest common divisor of these numbers using a recursive function

int LCD(int x,int y,int tour,int lcd){
	 if(tour <= x && tour <= y){
	 	if(x % tour == 0 && y % tour == 0){
	 		lcd = tour;
	 		tour++;
	 		LCD(x,y,tour,lcd);
		 }
	 	else{
	 		tour++;
	 		LCD(x,y,tour,lcd);
		 }

}

else{
	return lcd;
}

}

int main(){
    int n1,n2,CD;
 	printf("Enter the first number: \n"); scanf("%d",&n1);
	printf("Enter the second number: \n"); scanf("%d",&n2);
	
	CD = LCD(n1,n2,1,0);
	printf("The common divisor is:%d ",CD);
	
	return 0;
}
