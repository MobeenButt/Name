#include <iostream>
using namespace std; 
main(){
	cout<<"Enter the Name of the Person: ";
	string name;
	cin>> name;
	cout<<"Enter the target weight loss in kilograms: ";
	float kg;
	cin>> kg;
	float days;
	days = kg * 15 ;
	cout<<name<<" will need "<<days<<" days to lose "<<kg<<" kg of weight by following the doctor's suggestions";
	 

}