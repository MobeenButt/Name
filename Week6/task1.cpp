#include<iostream>
using namespace std;
string decideActivity(string temperature,string humidity);
main(){
    string temperature,humidity;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temperature;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;
    decideActivity(temperature,humidity);
}
string decideActivity(string temperature,string humidity){
    if(temperature=="warm"&&humidity=="dry"){
        cout<<"Recommended activity: Play tennis";
    }
    
    if(temperature=="warm"&&humidity=="humid"){
        cout<<"Recommended activity: Swim";
    }
    
    if(temperature=="cold"&&humidity=="dry"){
        cout<<"Recommended activity: Play basketball";
    }
    
    if(temperature=="cold"&&humidity=="humid"){
        cout<<"Recommended activity: Watch TV";
    }
    
}
