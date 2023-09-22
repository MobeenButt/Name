#include <iostream>
using namespace std;
int main(){
	cout<<"Number of Minutes: ";
	int M;
	cin>>M;
	cout<<"Frames per Second: ";
	int S;
	cin>>S;
	int total;
	total = M * S * 60;
	cout<<"Total Number of Frames: "<<total;
	}