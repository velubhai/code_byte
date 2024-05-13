#include<stdio.h>
int main(){
  int n = 13,counter=0;
  
  while(n > 1){
    if(n % 2 == 0){ //for even numbers
      n = n / 2;
      counter ++;
      
    }
    else{ //for odd numbers
      n = n * 3 + 1;
      counter ++;
      
    }
    
  }
  printf("%d",counter);
  return 0;
}
