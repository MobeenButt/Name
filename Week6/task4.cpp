#include<iostream>
using namespace std;
float cellularcompany(char code, string time, int min);
string bill(char);
main()
{
    int min;
    char code;
    string time;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>code;
    string service;
    service = bill(code);
    if (service == "Premium"){
        cout<<"Enter time of the call (D/d for day, N/n for night): ";
        cin>>time;
    }
    cout<<"Enter the number of minutes used: ";
    cin>>min;
    float result;
    result=cellularcompany(code,time,min);
    cout<<"Service Type: "<<service<< endl;
    cout<<"Total Minutes Used: "<< min<<" minutes"<<endl;
    cout<<"Amount Due: $"<<result;
}

string bill(char code)
{
    string service;
    if(code=='P'||code== 'p')
    {
    return "Premium";
    } 
    if(code=='R'||code== 'r')
     return "Regular";
        
}

float cellularcompany(char code, string time, int min){
    float res;
    if(time=="N"||time=="n"){
    res = 25;
    if(min > 100){
    min=min- 100;
    res =res+min* 0.05;
    }
    if (time=="D" || time=="d")
    {
    res = 25;
    if(min>75){
    min=min- 75;
    res =res+min*0.10;}
    }
}
    
else{
    res= 10.0;
    if(min>50){
    min=min- 50;
    res=res+min* 0.20;}
    }
    return res;

}