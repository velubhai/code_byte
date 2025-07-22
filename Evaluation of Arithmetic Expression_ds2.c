
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int evaluate_expression(char *expression) {
 
	 int numbers[100],i, numIndex = 0, opIndex = 0;
	 char operators[100];
	 char *token = strtok(expression, " ");
	 
	 
	 
		while (token != NULL) {
			if (strcmp(token, "+") == 0 || strcmp(token, "-") == 0) 
			{
			operators[opIndex++] = token[0]; 
			} 
			 
			 else if (strcmp(token, "*") == 0 || strcmp(token, "/") == 0)
			 {
			 	
			 char op = token[0];
			 token = strtok(NULL, " ");
			 int num = atoi(token);
			 
			 if (op == '*') 
			 {
			 numbers[numIndex - 1] *= num; 
			 } 
			 
			else if (op == '/')
			 {
			 numbers[numIndex - 1] /= num; 
			 }
			 } 
			 
			 else 
			 {
			 numbers[numIndex++] = atoi(token); 
			 }
			 token = strtok(NULL, " ");
			 }
			 int result = numbers[0];
			 for (i = 0; i < opIndex; i++) 
			 {
			 if (operators[i] == '+') {
			 result += numbers[i + 1];
			 } 
			 else if (operators[i] == '-')
			{
			 result -= numbers[i + 1];
			 }
			 }
	 return result;
}
int main() {
 char expression[] = "2 + 3 * 4 - 1";
 int result = evaluate_expression(expression);
 printf("Result: %d\n", result);
 return 0;
}

