#include <iostream>
using namespace std;

int rotation(int length, string arr[]);

int main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;

    string arr[length];
    cout << "Enter the elements of the array (\"left\" or \"right\"): " << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    int ans = rotation(length, arr);
    cout << "Number of full rotations: " << ans;

    return 0;  
}

int rotation(int length, string arr[])
{
    int count = 0;
    int right = 90;
    int left = -90;
    int result = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == "right")
        {
            result = result + right;
        }
        else if (arr[i] == "left")
        {
            result = result + left;
        }

        if (result >= 360)
        {
            result = result - 360;
            count++;
        }
    }

    return count;
}
