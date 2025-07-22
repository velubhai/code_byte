#include<iostream>
using namespace std;

int add(int a,int b){
	return a+b;
}
int add(int a,int b,int c){
	return a+b+c;
}
int add(double a,double b){
	return a+b;
}
int main(){
	int intsum1 = add(5,10);
	int intsum2 = add(5,10,15);
	double doublesum = add(5.5,10.5);
	
	cout << "sum of two integers" << intsum1 << endl;
	cout << "sum of three integers"<< intsum2 << endl;
	cout << "sum of two doubles"<< doublesum << endl;
		
		return 0;
}
