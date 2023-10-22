#include<iostream>
using namespace std;
main(){
    int period;
    cout<<"Enter Number of days you visited Hospital: ";
    cin>>period;
    int treatedpatient=0;
    int untreatedpatient=0;
    int doctors=7;
    for(int day=1;day<=period;day++){
    int patientvisited;
    cout<<"Number of patients who visited hospital on Day "<<day<<": ";
    cin>>patientvisited;    
        if(day%3==0){
            if(untreatedpatient>treatedpatient){
                doctors=doctors+1;
            }
        }
        if(patientvisited<=doctors){
            treatedpatient=treatedpatient+patientvisited;
        }
    else{
        treatedpatient+=doctors;
        untreatedpatient+=patientvisited-doctors;
    }

}
cout<<"Treated Patients: "<<treatedpatient<<endl;
cout<<"Untreated Patients: "<<untreatedpatient;
return 0;
}

