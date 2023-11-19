#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter how many words you want to enter: ";
    cin >> size;
    string words[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> words[i];
    }
    char letter;
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (char c : words[i])
        {
            if (letter ==c)
            {
                count++;
            }
        }   }
    cout << letter << " shows up " << count << " times in the data.";
}