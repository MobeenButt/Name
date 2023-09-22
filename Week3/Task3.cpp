#include <iostream>
using namespace std;
int main(){
	cout<<"Enter Initial Velocity (m/s): ";
	float INT;
	cin>>INT;
	cout<<"Enter Acceleration (m/s^2): ";
	float A;
	cin>>A;
	cout<<"Enter Time (s): ";
	float T;
	cin>>T;
	float final;
	final = (A * T) + INT;
	cout<<"Final Velocity (m/s): "<<final;
	}