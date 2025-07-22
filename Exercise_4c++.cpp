#include<iostream>
using namespace std;
class complex{
	private:
		int real,imag;
		
	public:
		complex(int r=0, int i=0){
			real = r;
			imag = i;
		}
		complex operator+(complex c){
			complex temp;
			temp.real= real + c.real;
			temp.imag= imag + c.imag;
			return temp;
		}
		int getreal(){
			return real;
		}
		int getImag(){
			return imag;
		}
};
int main(){
	complex c1(4,7);
	complex c2(3,5);
	complex res;
	
	res = c1 +c2;
	cout << "result:"<<res.getreal()<<"+"<<res.getImag()<<"i"<<endl;
return 0;
}
