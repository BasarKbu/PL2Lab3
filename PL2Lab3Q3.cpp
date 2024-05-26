#include<stdio.h>

// Declare the return type as int.
int SumOfDigits(int x, int total) {
    // if the number is 0 return the total
    if (x == 0) {
        return total;
    } else {
        // Add the last digit of the number to the total
        total += x % 10;
        // Divide the number you have entered.
        x = x / 10;
        // Call the function again and return the total with the number.
        return SumOfDigits(x, total);
    }
}

int main() {
    int n, Sum = 0;
    printf("Enter a number: \n");
    scanf("%d", &n);
    Sum = SumOfDigits(n, Sum);
    
    printf("Sum of the digits is: %d\n", Sum);
    
    return 0;
}
 
