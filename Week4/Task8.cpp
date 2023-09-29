#include<iostream>
using  namespace std;
void pet(int holidays);
main(){
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}
void pet(int holidays){
	int wdays = 365 - holidays;
	int play = wdays * 63 + holidays * 127;
	int norm = 30000;
	int diff= norm - play;
if(diff>=0){
	cout<<"Tom sleeps well"<<endl;
	cout<<diff/60<<" hours and "<<diff%60<<" minutes less for play";
	}
if(diff<0){
	cout<<"Tom will run away"<<endl;
	cout<<diff/60*(-1)<<" hours and "<<diff%60*(-1)<<" minutes for play";
}

}