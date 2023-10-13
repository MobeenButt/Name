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
    
string calculatetime(int hours, int days, int workers,int totaltime);
main(){
    cout << "Enter the needed hours: ";
    int hours;
    cin >> hours;
    cout << "Enter the days that the firms has: ";
    int days;
    cin >> days;
    cout << "Enter the number of all workers: ";
    int workers;
    cin>> workers;
    int timefirmhave;
    timefirmhave = (days*workers*10);
    int training;
    training = timefirmhave*0.1;
    int totaltime;
    totaltime = timefirmhave-training;
    string result;
    result = calculatetime(hours, days, workers, totaltime);
    cout <<result;


}
string calculatetime(int hours, int days, int workers,int totaltime)
{
    if (totaltime >= hours)
    {totaltime = totaltime - hours;
    return "Yes!"+ to_string(totaltime) +" hours left."; 

    }
    if (totaltime < hours)
    {totaltime = hours-totaltime;
    return "Not enough time! " +to_string(totaltime)+ " hours needed.";
    }
}
      
