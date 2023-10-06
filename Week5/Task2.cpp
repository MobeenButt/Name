#include<iostream>
#include<cmath>
using namespace std;
string tax(string name,int price );
main(){
    string car;
    int veh;
    string result;
    result = tax( car,veh );
    cout<<result;


}
string tax(string name,int price ){
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>name;
    cout<<"Enter the price of a vehicle: $";
    cin>>price; 
if(name == "E"){
   int tax = price * 0.08;
    price = price + tax;
     return "The final price of a vehicle of type " + name + " after adding the tax is $" + to_string(price) + ".";
    }
    if(name == "M"){
   int tax = price * 0.06;
    price = price + tax;
     return "The final price of a vehicle of type " + name + " after adding the tax is $" + to_string(price) + ".";
    }
    if(name == "V"){
   int tax = price * 0.12;
    price = price + tax;
     return "The final price of a vehicle of type " + name + " after adding the tax is $" + to_string(price) + ".";
    }
     if(name == "S"){
   int tax = price * 0.10;
    price = price + tax;
     return "The final price of a vehicle of type " + name + " after adding the tax is $" + to_string(price) + ".";
    }
     if(name == "T"){
    int tax = price * 0.15;
    price = price + tax;
     return "The final price of a vehicle of type " + name + " after adding the tax is $" + to_string(price) + ".";
    }
}
    

      
