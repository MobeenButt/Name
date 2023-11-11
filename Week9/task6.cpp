#include <iostream>
using namespace std;
int coloringTime(string arr[], int size);
int main() {
    int size, n;

    cout << "Enter the size of Array: ";
    cin >> size;

    string arr[size];

    
    for (int i = 0; i < size; i++) {
    cout << "Enter Element "<<i+1<<" : ";
        cin >> arr[i];
    }
    coloringTime(arr,size);
}
int coloringTime(string arr[], int size){


int switchtime=0;
int colortime=size*2;
for (int i = 1; i < size; i++)
{
    if(arr[i]!=arr[i-1]){
        switchtime=switchtime+1;
    }
}

int total =switchtime+colortime;
cout<<"Time to color: "<<total<<" seconds";
}