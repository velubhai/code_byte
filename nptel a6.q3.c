#include <stdio.h>

int max(int a, int b){
    if(a>b)
        return a;
    return b;
}

int min(int a, int b){
    if(a<b)
        return a;
    return b;
}

int main() {
    int A[100][100];
    int B[100][100];
    
    int n,l,sum,i,j;
    
    scanf("%d",&n);
    scanf("%d",&l);
    
    for( i = 0; i< n;i++){
        for(  j = 0; j< n;j++)
            scanf("%d",&A[i][j]);
    }
    
    for( i = 0; i< n;i++){
        for( j = 0; j< n;j++){
            
            int ih,il,jh,jl;
            sum =0;
              
           for(il = max(i-l,0) ; il <= min(i+l,n-1) ; il++)
           	for(jl = max(j-l,0) ; jl <= min(j+l,n-1) ; jl++)
           		sum += A[il][jl];

            B[i][j] = sum;
        }
    }
    
    for( i = 0; i< n;i++){
        for( j = 0; j< n;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
l-window smoothing.

Given an n×n integer Matrix A and an positive number l such that 2l+1=n, write a C program to print the l window smoothing of A. 

To get the  l-window smoothing of A , we replace A[i][j] with the sum of the values of the imaginary submatrix S of A with centre at A[i][j], and having size 2l+1×2l+1


More precisely, the smoothed matrix B[i,j]=?u=ilih?v=jljhA[u][v]  
where il=max(i-l,0),ih=min(i+l,n-1),jl=max(j-l,0),jh=min(j+l,n-1).

Input
The first line contains the dimension of the matrix n. Assume n < 100.
The second line contains the smoothing parameter l. 
The next n lines contains the contents of the matrix A, each row per line.

Output
The smoothed matrix of A

Note: Ignore the Passed after ignoring Presentation Error comment.

Example 

Input

4
1
1471
2582
3693
4714

Output

12272718
21454530
27454527
20303017

Explanation

A[0][0] = 1 + 2 + 4 + 5 = 12 
A[1][1] = 1 + 2 +3 + 4 + 5 + 6 + 7 + 8 + 9 = 45
*/




