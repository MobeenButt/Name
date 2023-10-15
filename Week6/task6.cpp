#include <iostream>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);

int main(){
    string month;
    int numberOfStays;
    cout<<"Enter the month (May, June, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>numberOfStays;
    string prices = calculateHotelPrices(month, numberOfStays);
    cout<<prices<<endl;

}
string calculateHotelPrices(string month, int numberOfStays){
    float studioPrice =0.0;
    float apartmentPrice= 0.0;

    if (month=="May"||month=="October") {
        studioPrice=50.0*numberOfStays;
        apartmentPrice=65.0*numberOfStays;

        if (numberOfStays>7 && numberOfStays<= 14) {   
            studioPrice=numberOfStays*50;
            studioPrice=studioPrice-(studioPrice*0.05);
        apartmentPrice=65.0*numberOfStays;
            
            }  
         else if (numberOfStays>14) {
            studioPrice =numberOfStays*35;  
            apartmentPrice =numberOfStays* 58.5; 
        }
    } else if (month=="June"||month== "September") {
        if(numberOfStays>7&&numberOfStays<=14)
        studioPrice= 75.199994*numberOfStays;
        apartmentPrice= 68.70*numberOfStays;

        if (numberOfStays>14) {
            studioPrice =studioPrice-(studioPrice*0.2) ;  
            apartmentPrice =apartmentPrice*1;  
        }
    } else if(month == "July"||month == "August"){
        studioPrice= 76.0 * numberOfStays;
        apartmentPrice= 69.3 * numberOfStays;
    }

    string result="Apartment: "+ to_string(apartmentPrice)+"$.\nStudio: " + to_string(studioPrice) + "$.";
    return result;
}

