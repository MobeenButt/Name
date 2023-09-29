#include<iostream>
using  namespace std;
void flowershop(int red,int white,int tulip);
main(){
	int a,b,c;
	cout<<"Red Rose: ";
	cin>>a;
	cout<<"White Rose: ";
	cin>>b;
	cout<<"Tulips: ";
	cin>>c;
	flowershop(a,b,c);
}

void flowershop(int red,int white,int tulip){
	float pricered;
	pricered = red * 2;
	float pricewhite;
	pricewhite = white * 4.1;
	float pricetulip;
	pricetulip = tulip * 2.5;
	float price =  pricered + pricewhite + pricetulip;
	
if(price > 200){
	float discount;
	discount = price * 0.2;
	cout<<"Original Price: $"<<price<<endl;
	float nprice;
	nprice = price - discount;
	cout<<"Price after Discount: $"<<nprice;
}
if(price < 200){
	cout<<"Original Price: $"<<price<<endl;
	cout<<"No discount applied."<<endl;}
}
