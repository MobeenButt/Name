#include <iostream>
#include <cstring>

using namespace std;

string findBrokenKeys(string correctPhrase, string actualTyped)
{
    string brokenKeys;
    string typekeys;

    for (int i = 0; i < correctPhrase.length(); ++i)
    {

        if (correctPhrase[i] != actualTyped[i] && typekeys.find(correctPhrase[i])==string::npos)
        {
            brokenKeys += correctPhrase[i];
            typekeys += correctPhrase[i];
        }
    }

    return brokenKeys;
}
int main()
{
    string correctPhrase, actualTyped;

    cout << "Enter the correct phrase: ";
    getline(cin, correctPhrase);

    cout << "Enter what you actually typed: ";
    getline(cin, actualTyped);

    string brokenKeys = findBrokenKeys(correctPhrase, actualTyped);

    cout << "Broken keys: " << brokenKeys << endl;

    return 0;
}
