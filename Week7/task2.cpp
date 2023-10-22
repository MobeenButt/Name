#include <iostream>
using namespace std;
void star(int n);
int main() {
    int rowSize;
    cout << "Enter the number of rows: ";
    cin >> rowSize;
    star(rowSize);
}
void star(int rowSize){

int rows = rowSize/2;


   
        for (int i = 1; i <= rows; i++)
        {

            for (int j = 1; j <= rows - i; j++)
            {
                cout << " ";
            }

            for (int k = 1; k <= i; k++)
            {
                cout << "*";
            }

            cout << endl;
        }   
 for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        for (int k = i; k <= rows; k++)
        {
            cout << "*";
        }

        cout << endl;
    }   
}

