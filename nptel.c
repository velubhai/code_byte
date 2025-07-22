#include <stdio.h>
int main(){
	int a,b,c;
	a=5;
	b=7;
	c=111;
	c/=++a*b--;
	printf("%d %d %d",a,b,c);
}
