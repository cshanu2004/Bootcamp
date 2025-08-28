#include <stdio.h>
#include <math.h>

// Function to count the number of digits
int countDigits(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

// Recursive function to calculate the sum of digits raised to the power of count
int armstrongSum(int n, int digits) {
    if (n == 0)
        return 0;
    int lastDigit = n % 10;
    return pow(lastDigit, digits) + armstrongSum(n / 10, digits);
}

// Function to check if a number is an Armstrong number
int isArmstrong(int n) {
    int digits = countDigits(n);
    return (n == armstrongSum(n, digits));  // Check if sum matches the number
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    
    return 0;
}
