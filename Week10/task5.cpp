#include<iostream>
using namespace std;

int main() {
     int num = 10;
    int weights[num];

    
    cout << "Enter the weights of the 10 packages: " << endl;
    for (int i = 0; i < num; i++) {
        cin >> weights[i];
    }
    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (weights[j] > weights[j + 1]) {
                int temp = weights[j];
                weights[j] = weights[j + 1];
                weights[j + 1] = temp;
            }
        }
    }

   
    cout << "Sorted array in ascending order: [";
    for (int i = 0; i < num; i++) {
        cout << weights[i];
        if (i < num - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
