#include <iostream>
using namespace std;
string same(string arr[], int size);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    string arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
    }
    string result = same(arr,size);
    cout << result;
}
string same(string arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        string currentword = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (currentword == arr[j])
            {
                return "1"; 
            }
        }
    } 
    return "0";
}
