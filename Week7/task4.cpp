
#include<iostream>
using namespace std;
main(){
    int triangles;
    cout<<"Enter number of Triangle: ";
    cin>>triangles;
    int sum =0;
    int dots =0;
    for(int i=1;i<=triangles;i++){
         dots=sum+i;
         sum+=i;

    }
cout<<"Dots in the Triangle: "<<dots;

}