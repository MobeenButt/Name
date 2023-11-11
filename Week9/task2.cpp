#include <iostream>
using namespace std;
string containsSeven(int arr[], int size);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
    }
    string result = containsSeven(arr, size);
    cout << result;
}
string containsSeven(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int currentnumber = arr[i];
        while (currentnumber > 0)
        {
            if (currentnumber % 10 == 7)
            {
                return "Boom!";
            }
            currentnumber = currentnumber / 10;
        }
    }
    return "there is no 7 in the array";
}
