#include<iostream>
using  namespace std;
void duration(int hours,int minutes);
main(){
	int a,b;
	cout<<"Enter the number of hours: ";
	cin>>a;
	cout<<"Enter the number of minutes: ";
	cin>>b;
	duration(a,b);
}
void duration(int hours,int minutes){
int h;
h= hours*60;
if(h>minutes){
cout<<hours;}

if(h<minutes){
cout<<minutes;}
}