// Program to create a simple calculator
#include <stdio.h>

int main() {
    char operation;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operation)
    {
        case '+':
        	{
  				int n, reversed = 0, remainder, original;
    			printf("Enter an integer: ");
    			scanf("%d", &n);
    			original = n;

    // reversed integer is stored in reversed variable
    			while (n != 0) {
        		remainder = n % 10;
        		reversed = reversed * 10 + remainder;
        		n /= 10;
    		}

    // palindrome if orignal and reversed are equal
    		if (original == reversed)
        		printf("%d is a palindrome.", original);
    		else
        		printf("%d is not a palindrome.", original);

    			return 0;
			}
             
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}

