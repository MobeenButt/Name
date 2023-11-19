#include <iostream>
using namespace std;
int totalvolume(int lenght, int width, int height);
main()
{
    int numberofboxes;
    cout << "Enter the number of boxes: ";
    cin >> numberofboxes;
    int dimension[numberofboxes * 3];
    cout << "Enter the dimensions of the boxes (length,width,height): " << endl;
    for (int i = 0; i < numberofboxes * 3; i++)
    {
        cin >> dimension[i];
    }
    int value=0;
    for (int j = 0; j < numberofboxes * 3; j = j + 3)
    {
       value += totalvolume(dimension[j], dimension[j + 1], dimension[j + 2]);
    }
    cout << "Total volume of all boxes: "<<value;
}
int totalvolume(int lenght, int width, int height)
{
    int mul =lenght * width * height;
}