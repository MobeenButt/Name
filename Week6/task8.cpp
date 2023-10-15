#include<iostream>
using namespace std;
int calculatevolleyballgame(string year, int holiday, int week);
main(){
    int holiday,week;
    string year;
    cout<<"Enter year type: ";
    cin>>year;
    cout<<"Enter number of holidays: ";
    cin>>holiday;
    cout<<"Enter number of weekends: ";
    cin>>week;
int result = calculatevolleyballgame( year, holiday, week);
cout<<result;
}
int calculatevolleyballgame(string year, int holiday, int week){
    int sum,value;
    
    if(year=="leap"){
        week=week*(3/4);
        holiday=holiday*(2/3);
        sum=holiday+week;
        value=48-48*0.15;
        value=value+sum+1;
    }
    else{
week=week*(3/4);
        holiday=holiday*(2/3);
        sum=holiday+week;
        value=48-48*0.15;
        value=value+sum;
        value=value-value*0.15;
        if(value>=44){
            value=value+2;
value=value+1;
        }
    } return value;
 }