#include <iostream>
using namespace std;
main(){
	cout<<"Number of square meters you can paint: ";
	int meter;
	cin>>meter;
	cout<<"Width of the single wall (in meters): ";
	int width;
	cin>>width;
	cout<<"Height of the single wall (in meters): ";
	int height;
	cin>>height;
	int paint;
	paint = height * width;
	int p;
	p = meter/paint;
	cout<<"Number of walls you can paint: "<<p;
}