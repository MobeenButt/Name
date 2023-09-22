#include <iostream>
using namespace std;
main(){
	cout<<"Enter the person's age: ";
	int age;
	cin>>age;
	cout<<"Enter the number of times they've moved: ";
	int move;
	cin>>move;
	int M;
	M = move + 1 ;
	int time;
	time = age / M ;
	cout<<"Average number of years lived in the same house: "<<time;
	}