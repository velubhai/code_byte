	`#include <iostream>
using namespace std;
// Define a class called "Box"
class Box {
	private:
	double length, breadth, height;
	public:
	// Constructor to initialize the object
	Box(double l, double b, double h) {
	length = l;
	breadth = b;
	height = h;
	cout << "Constructor called. Box created with dimensions: " << length << " x " << breadth << " x " << height << endl;
}


// Destructor to free the object
~Box() {
	cout << "Destructor called. Box destroyed."
	<< endl;
}
// Method to display the dimensions of the box



void displayDimensions() {

cout << "Length: " << length << endl;
cout << "Breadth: " << breadth << endl;
cout << "Height: " << height << endl;
}
};


int main() {
// Create an object of the Box class
		Box box1(10.5, 5.2, 3.8);
		// Display the dimensions of the box
		cout << "Dimensions of the box:" << endl;
		box1.displayDimensions();
return 0;
}
