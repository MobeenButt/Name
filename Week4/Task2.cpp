#include<iostream>
using  namespace std;
void t(string n1);
main(){
	cout<<"Enter 'true' or 'false': ";
	string a;
	cin>>a;
	t(a);
}
void t(string n1){
if(n1=="true"){
	cout<<"false";
}
if(n1!="true"){
	cout<<"true";
}
}
