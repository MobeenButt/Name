#include <iostream>
using namespace std; 
main(){
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	int pounds;
	cin>>pounds;
	cout<<"Enter the cost of the bag: $";
	int cost;
	cin>>cost;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	int area;
	cin>>area;
	float costinpounds;
	costinpounds = cost/pounds; 
	cout<<"Cost of fertilizer per pound: $"<<costinpounds<<endl;
	float costpersquare;
	costpersquare = cost / area;
	cout<<"Cost of fertilizing per square foot: $"<<costpersquare;


}	