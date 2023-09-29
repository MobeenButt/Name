#include<iostream>
using  namespace std;
void tp(int people,int roll);
main(){
	int p,t;
	cout<<"Number of people in the household: ";
	cin>>p;
	cout<<"Number of rolls of TP: ";
	cin>>t;
	tp(p,t);
}
void tp(int people,int roll){
	int tr,ru,days;
	tr = roll * 500;
	ru = people * 57;
	days = tr/ru ;
if(days < 15){
	cout<<"Your TP will only last "<<days<<" days, buy more!";
}
if(days >= 15){
	cout<<"Your TP will last "<<days<<" days, no need to panic!";
}
}
