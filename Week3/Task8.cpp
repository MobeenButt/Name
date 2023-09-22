#include <iostream>
using namespace std; 
main(){
	cout<<"Enter vegetable price per kilogram (in coins): ";
	float veg;
	cin>>veg;
	cout<<"Enter fruit price per kilogram (in coins): ";
	float fru;
	cin>>fru;
	cout<<"Enter total kilograms of vegetables: ";
	int kveg;
	cin>>kveg;
	cout<<"Enter total kilograms of fruits: ";
	int kfru;
	cin>>kfru;
	float totalveg;
	totalveg = veg * kveg;
	float totalfru;
	totalfru = fru * kfru;
	float totale;
	totale = totalveg + totalfru;
	float rs;
	rs = totale/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<rs;
	}	