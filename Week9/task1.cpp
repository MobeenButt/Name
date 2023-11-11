#include<iostream>
using namespace std;
bool even(string);
main(){
    string word;
    cout<<"Enter a String: ";
    cin>>word;
   cout<< even(word);
    }
bool even(string word){
    int lenght =word.length();
    if (lenght%2==0)
    {
        return true;
    }
    return false;
    
}