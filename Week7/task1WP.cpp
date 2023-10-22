#include<iostream>
using namespace std;
void printstar(int rowsize);
main(){
    int rowsize;
    cout<<"Enter desired number of rows: ";
    cin>>rowsize;
    printstar(rowsize);
}
void printstar(int rowsize){
    for(int row=1;row<=rowsize;row++){
        for(int col =1;col<=row;col++){
            cout<<"*";
        }
    cout<<endl;
    }
}