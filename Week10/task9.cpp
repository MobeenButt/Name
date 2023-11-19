#include<iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;

    cout << "Enter the elements of the array:" << endl;
    int special[size];

    for (int i = 0; i < size; i++){
        cin >> special[i];
    }
    int num =(size==2)?2:3;
    int count = 0;
    bool check =false;
    for (int i = 0; i <size; i++) {
        if (special[i] > num) {
           check=true;
            count++;
        }
        else{
            check=true;
            break;
        }
    }
    count++;
    if(!check){
        count=-1;
    }
        cout << "Special value: " << count;
    
}
