#include <iostream>
using namespace std;

string convert(string pin);

int main()
{
    string pin;
    cout << "Enter your PIN (4 digits): ";
    cin >> pin;
    string result = convert(pin);
    cout << result;

    return 0;
}

string convert(string pin)
{
    const string MOVES[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string output;
    bool valid = true;

    for (int i = 0; i < 4; i++)
    {
        int temp = pin[i];
        int num = temp - 48;

        if (temp < 48 || temp > 57)
        {
            valid = false;
            break;
        }

        int index = num + i;
        if (index >= 10)
        {
            index = index - 10;
        }

        output = output + MOVES[index];

        // Add a comma if it's not the last move
        if (i < 3)
        {
            output += ", ";
        }
    }

    if (valid)
    {
        return output;
    }
    else
    {
        return "Invalid input.";
    }
}
