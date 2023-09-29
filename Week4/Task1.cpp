#include<iostream>
using  namespace std;
void m(int n1,int n2);
int main(){
	int a,b ;
	cout<<"Enter the first number: ";
	cin>>a;	
	cout<<"Enter the second number: ";
	cin>>b;
	m(a,b);
}
void m(int n1,int n2){

if(n1==n2){
	cout<<"true";
}
if(n1!=n2){
	cout<<"false";
}
}
