#include<iostream>
using namespace std;
bool prime(int num);
main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<prime(num);
}
bool prime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}