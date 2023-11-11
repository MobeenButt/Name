#include <iostream>
#include <string>

using namespace std;

string findLongestWord(const string words[], int size);
bool Eligible(const string& word);

int main()
{
    int arraySize;
    cout << "Enter the number of words: ";
    cin >> arraySize;

    string items[arraySize];

    cout << "Enter the words, one by one:" << endl;

    for (int i = 0; i < arraySize; i++)
    {
        cin >> items[i];
    }

    string result = findLongestWord(items, arraySize);

    cout << "Longest 7-segment word: " << result;

    return 0;
}
bool Eligible(const string& word)
{
    for (char letter : word)
    {
        if (letter == 'k' || letter == 'm' || letter == 'v' || letter == 'w' || letter == 'x')
        {
            return false;
        }
    }
    return true;
}

string findLongestWord(const string words[], int size)
{
    string longest ;

    for (int i = 0; i < size; i++)
    {
        if (words[i].length() > longest.length() && Eligible(words[i]))
        {
            longest = words[i];
        }
    }
    return longest;
}

