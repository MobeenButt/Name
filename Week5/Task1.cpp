#include<iostream>
#include<cmath>
using namespace std;
string pyramidVolume(double length, double width, double height,string unit);
main(){
   double len,wid,hei;
   string u;
   string result ;
     result = pyramidVolume(len,wid,hei,u);  
    cout<< result;

}
string pyramidVolume(double length, double width, double height, string unit)
{
    
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>length;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>width;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>>height;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>>unit;

    double volume = (length*width*height)/3;
    if(unit == "meters"){
       
        volume = volume ;
     
       return "The volume of the pyramid is: " + to_string(volume) + " cubic "+ unit;
    }
    if(unit=="kilometers"){
        volume =volume / 1000000000;
        return "The volume of the pyramid is: " + to_string(volume) + " cubic "+ unit;
    }
     if(unit=="centimeters"){
        volume =volume * 1000000 ;
        return "The volume of the pyramid is: " + to_string(volume) + " cubic "+ unit;
    }
     if(unit=="millimeters"){
        volume =volume * 1000000000 ;
        return "The volume of the pyramid is: " + to_string(volume) + " cubic "+ unit;
    }
    


}
   