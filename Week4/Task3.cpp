#include<iostream>
using  namespace std;
void price(string name,float dollars);
main(){
	cout<<"Enter the country's name: ";
	string a;
	cin>>a;
	cout<<"Enter the ticket price in dollars: $";
	float b;
	cin>>b;
	price(a,b);

}
void price(string name,float dollars){
	float finalprice;
	float discount =0;
	
if(name=="Pakistan"){
	
	discount = dollars * 0.05 ;
	
}
if(name=="Ireland"){

	discount = dollars * 0.1 ;
	
}
if(name=="India"){
	discount = dollars * 0.2 ;
	
 }
if(name=="England"){
	discount = dollars * 0.3 ;
	
 }
if(name=="Canada"){
	
	discount = dollars * 0.45 ;
}

	finalprice = dollars - discount;
	cout<<"Final ticket price after discount: $"<<finalprice;
 }

