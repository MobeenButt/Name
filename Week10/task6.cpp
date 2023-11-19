#include <iostream>
using namespace std;

string reverseWords(string String)
{
    int length = String.length();

    int start = 0;
    int end = length - 1;
    while (start < end)
    {
        char temp = String[start];
        String[start] = String[end];
        String[end] = temp;
        ++start;
        --end;
    }

    start = 0;
    for (int i = 0; i <= length; ++i)
    {
        if (String[i] == ' ' || String[i] == '\0')
        {
            end = i - 1;
            while (start < end)
            {
                char temp = String[start];
                String[start] = String[end];
                String[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
    return String;
}

int main()
{

    string String;

    cout << "Enter a string: ";
    getline(cin, String);
    string result = reverseWords(String);
    cout << "Reversed string: " << result << endl;

    return 0;
}
