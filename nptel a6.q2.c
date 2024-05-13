#include <stdio.h>

void findpath(int matrix[100][100], int n, int x, int y, char* path, int pathIndex) {
    
    // If the destination is reached, print the path and return
    if (x == n - 1 && y == n - 1) {
        path[pathIndex] = '\0'; // Null terminate the string
        printf("%s\n", path);
        return;
    }

    if(matrix[x][y+1] == 1){
    	path[pathIndex] = 'R';
    	findpath(matrix, n, x, y+1, path, pathIndex+1);
    	
	}
	else if(matrix[x+1][y] == 1){
    	path[pathIndex] = 'D';
    	findpath(matrix, n, x+1, y, path, pathIndex+1);
    }

}
int main() {
    int n,i,j;
    scanf("%d", &n);
    
    int matrix[100][100];
    char path[200]; // Assuming the path will not be longer than 2n-1 steps

    // Read the matrix
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
	findpath(matrix, n, 0, 0, path, 0);

    return 0;
   }
/*
Simple Path Finding

Given an n×n binary Matrix A , where each entry is 0 or 1.
A has a unique path of 1's from  A[0][0] to A[n-1][n-1].
The path always goes Right (R) or Down (D).

Write a C Program.to print the directions of this path.

Note: You can assume that there is exactly one correct path.
All 1's in A are in this unique path, there are no dead ends.

Input
The first line contains the dimension of the matrix n. Assume n < 100.
The second line contains the contents of the matrix A, each row per line.

Output
The path of 1's in the Matrix.


Example 

Input

4
1 1 1 0 
0 0 1 1 
0 0 0 1 
0 0 0 1 


Output

RRDRDD

Explanation

The path of 1's from A[0][0] to A[3][3] is  

A[0][0]  Right --> A[0][1]  Right --> A[0][2]  Down --> A[1][2]  Right --> A[1][3]  Down --> A[2][3]  Down --> A[3][3].

Note: The code for reading inputs etc is given to you, complete the code of the function

void findPath(int matrix[100][100], int n, int x, int y, char* path, int pathIndex);
*\   
