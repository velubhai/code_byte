#include <iostream>
using namespace std;
 
class Room {
	float length;
	float breadth;
	float height;
	
	public:
	float calculate_area() {
	cout<<"Enter the Length:";
	cin>>length;
	cout<<"Enter the breadth:";
	cin>>breadth;
	
	return length * breadth;
	}
	
	float calculate_volume() {
		
	cout<<"Enter the Length:";
	cin>>length;
	cout<<"Enter the breadth:";
	cin>>breadth;
	cout<<"Enter the Height:";
	cin>>height;

	return length * breadth * height;
	}
};



int main() {
// create object of Room class
Room room1;
// assign values to data members
// calculate and display the area and volume of the
	cout << "Area of Room = "<< room1.calculate_area()<<
	endl;
	cout << "Volume of Room = "<<
	room1.calculate_volume() << endl;
return 0;
}
