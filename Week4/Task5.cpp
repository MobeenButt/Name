#include<iostream>
using  namespace std;
void possiblebonus(int n1,int n2);
main(){
	int a,b;
	cout<<"Enter your position: ";
	cin>>a;
	cout<<"Enter your friend's position: ";
	cin>>b;
	possiblebonus(a,b);

}
void possiblebonus(int n1,int n2){
if(n1+6 >= n2){
	cout<<"true";
}
if(n1+6< n2){
	cout<<"false";
}
}

