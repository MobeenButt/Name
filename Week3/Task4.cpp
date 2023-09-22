#include <iostream>
using namespace std; 
main(){
	cout<<"Enter Imposter Count: ";
	float imp;
	cin>> imp;
	cout<<"Enter Player Count: ";
	float ply;
	cin>> ply;	
	int chance;
	chance = 100 * ( imp / ply );
	cout<<"Chance of being an imposter: "<<chance<<"%";
}