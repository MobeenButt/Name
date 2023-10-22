#include <iostream>
#include <iomanip>
using namespace std;
int main() {
int count;
cout<<"Enter the count of cargo for transportation: ";
cin>>count;
int vantotal=0;
int lorrytotal =0;
int traintotal =0;
int totalweight =0;

for(int i=1;i<=count;i++){
int weight;
cout<<"Enter the tonnage of cargo "<<i<<": ";
cin>>weight;
totalweight+=weight;
if(weight<=3){
    vantotal+=weight;
}
else if(weight<=11){
lorrytotal+=weight;
}
else{
    traintotal+=weight;
}
}
 double averagePrice = (vantotal * 200.0 + lorrytotal * 175.0 + traintotal * 120.0) / totalweight;
    double vanPercentage = (static_cast<double>(vantotal) / totalweight) * 100.0;
    double lorryPercentage = (static_cast<double>(lorrytotal) / totalweight) * 100.0;
    double trainPercentage = (static_cast<double>(traintotal) / totalweight) * 100.0;

    cout << fixed << setprecision(2) << averagePrice << endl;
    cout << fixed << setprecision(2) << vanPercentage << "%" << endl;
    cout << fixed << setprecision(2) << lorryPercentage << "%" << endl;
    cout << fixed << setprecision(2) << trainPercentage << "%" << endl;

    return 0;
}
