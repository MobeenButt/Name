#include <iostream>
#include <string>
using namespace std;

string checkPointPosition(int h, int x, int y);
main() {
    int h, x, y;
    cout<<"Enter height: ";
    cin>>h;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
 string position = checkPointPosition(h, x, y);
cout<<position<<endl;
}

string checkPointPosition(int h, int x, int y) {
    int x1 = 0;
    int y1 = 0;
    int x2 = 3 * h;
    int y2 = h;
    int x3 = h;
    int y3 = 4 * h;
    int x4 = 2 * h;
    int y4 = 2 * h;
    int x5 = h;
    int y5 = h;

    if ((x>x1 &&x<x2) && (y>y1&&y< y2)) {
        return "Inside";
    } else if ((x>= x1 && x<=x2) && (y >= y1 && y <= y2)) {
        return "Border";
    } else if ((x> x2 && x<x3) && (y > y2 && y < y3)) {
        return "Inside";
    } else if ((x>= x2 && x<=x3) && (y >= y2 && y <= y3)) {
        return "Border";
    } else if ((x> x3 && x<x4) && (y > y3 && y < y4)) {
        return "Inside";
    } else if ((x>= x3 && x<=x4) && (y >= y3 && y <= y4)) {
        return "Border";
    } else if ((x> x4 && x<x5) && (y > y4 && y < y5)) {
        return "Inside";
    } else if ((x>= x4 && x<=x5) && (y >= y4 && y <= y5)) {
        return "Border";
    } else {
        return "Outside";
    }
}

