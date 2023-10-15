#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit, string day, double quantity);
main(){    
    double quantity;
    string fruit;
    string day;
    cout<<"Enter the fruit name: ";
    cin>>fruit;
    cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin>>day;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    float ans;
      ans=calculateFruitPrice(fruit,day, quantity);
    if (day == "Sunday" || day== "Saturday" || day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" )
{
    cout<<ans;
}    
if (day != "Sunday" && day != "Saturday" && day != "Monday" && day!= "Tuesday" && day != "Wednesday" && day != "Thursday" && day != "Friday" )
    {
cout<<"error";
}
}

float calculateFruitPrice(string fruit, string day, double quantity)
{       
    float price;
    
    if (day == "Saturday"||day == "Sunday")
    {
        if(fruit == "banana")
        {
            price = 2.70*quantity;
        
        }
         if (fruit == "apple")
        {
            price = 1.25*quantity;
            
        }
         if(fruit == "orange")
        {
            price = 0.90*quantity;
           
        }
         if(fruit == "grapefruit")
        {
            price = 1.60*quantity;
            

        }
         if(fruit == "kiwi")
        {
            price = 3.00*quantity;
            
        }
        if(fruit == "pineapple")
        {
            price = 5.60*quantity;
            
        }
         if(fruit == "grapes")
        {
            price = 4.20*quantity;}     
         }

 if (day == "Monday"||day == "Tuesday"||day == "Wednesday"||day == "Thursday"||day == "Friday")
    { 
         if(fruit == "banana")
        {
            price = quantity*2.50;
        }
        if (fruit == "apple")
        {
            price = quantity*1.20;
        }
        if (fruit == "orange")
        {
            price = quantity*0.85;
        }
        if (fruit == "grapefruit")
        {
            price = quantity*1.45;
        }
        if (fruit == "kiwi")
        {
            price = quantity*2.70;
        }
        if (fruit == "pineapple")
        {
            price = quantity*5.50;
        }
        if (fruit == "grapes")
        {
            price = quantity*3.85;}
          
    }
    return price;
}