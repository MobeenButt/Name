#include <iostream>
using namespace std;
bool cycle(int size, int arr[], int lengthofcycle);

main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int lengthofcycle;
    cout << "Enter the length of the cycle: ";
    cin >> lengthofcycle;
    if (cycle(size,arr,lengthofcycle))
    {
        cout<<"Output: 1";
    }
    else{
        cout<<"Output: 0";
    }
    
}
bool cycle(int size, int arr[], int lengthofcycle)
{
    if (lengthofcycle > size)
    {
        return true;
    }
    else
    {
        for (int j = 1; j + lengthofcycle<size; j++)
        {
            if (arr[j + lengthofcycle] != arr[j])
                return false;
        }
        return true;
    }
}