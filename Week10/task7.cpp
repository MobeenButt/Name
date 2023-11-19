#include<iostream>
using namespace std;

int find(int arr[], int n);
bool ArrangedConsecutively(int arr[], int n);
int count = 0;

int main() {
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;
    int Arr[size];
    int originalArr[size];
    
    cout << "Enter the elements of the array: "<<endl;
    for (int i = 0; i < size; i++)
        cin >> originalArr[i];

    int x = 0;
    while (count < size) {
        Arr[x] = find(originalArr, size);
        x++;
    }

    if (ArrangedConsecutively(Arr, size))
        cout << "Can be arranged: 1";
    else
        cout << "Can be arranged: 0";

    return 0;
}

int find(int arr[], int n) {
    int minValue = 1000;
    int minIndex = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }

    count++;
    arr[minIndex] = 1000;
    return minValue;
}

bool ArrangedConsecutively(int arr[], int n) {
    for (int i = 0; i + 1 < n; i++) {
        if (arr[i + 1] != arr[i] + 1) {
            return false;
        }
    }
    return true;        
}
