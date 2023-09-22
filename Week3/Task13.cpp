#include<iostream>
using namespace std;
main() {
    int b,sum;      

    cout << "Enter the first integer: ";
    cin >> b;
    sum = b ; 

    cout << "Enter the second integer: ";
    cin >> b ;
    sum = sum + b ; 

    cout << "Enter the third integer: ";
    cin >> b ;
    sum = sum + b; 

    cout << "Enter the fourth integer: ";
    cin >> b ;
    sum = sum + b ; 

    cout << "Enter the fifth integer: ";
    cin >> b ;
    sum = sum + b ; 
    cout << "The sum of the 5 integers is: " << sum;
}

