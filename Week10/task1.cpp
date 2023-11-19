#include<iostream>
using namespace std;
int totalprogress(int miles[],int num);

main(){
    int num;
    cout<<" Enter the number of Saturdays: ";
    cin>>num;
    int miles[num];
    for(int i=0;i<num;i++){
cout<<"Enter miles run for Saturday "<<i+1<<": ";
cin>>miles[i];
    }
cout<<"Total progress days: "<<totalprogress(miles,num);

}
int totalprogress(int miles[],int num){
    int progressdays=0;
    for (int i = 1; i < num; i++)
    {
        if (miles[i]>miles[i-1])
        {
            progressdays=progressdays+1;
        }
        
    }
    return progressdays;
}