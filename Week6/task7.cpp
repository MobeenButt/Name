#include <iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
 main(){
int examHour, examMinute, studentHour, studentMinute;
cout<<"Enter Exam Starting Time (hour): ";
cin>>examHour;
cout<<"Enter Exam Starting Time (minutes): ";
cin>>examMinute;
cout<<"Enter Student hour of arrival: ";
cin>>studentHour;
cout<<"Enter Student minutes of arrival: ";
cin>>studentMinute;
string result = checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
cout<<result<<endl;
    
    }
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute){
    int examtimeinminutes = examHour * 60 + examMinute;
    int studenttimeinminutes = studentHour * 60 + studentMinute;
    int timedifferenceinminutes = studenttimeinminutes - examtimeinminutes;
    
    if (timedifferenceinminutes > 0) {
        if (timedifferenceinminutes <= 30) {
            return "Late\n" + to_string(timedifferenceinminutes) + " minutes after the start";}
             else {
            int hoursLate = timedifferenceinminutes / 60;
            int minutesLate = timedifferenceinminutes % 10;
            return "Late\n" + to_string(hoursLate) + ":" + (minutesLate < 10 ? "0" : "") + to_string(minutesLate) + " hours after the start";
}  
  } 
else if (timedifferenceinminutes < 0) {
        timedifferenceinminutes = -timedifferenceinminutes;
        if (timedifferenceinminutes <= 30) {
            
            return "Early\nTest:" + to_string(timedifferenceinminutes) + " minutes before the start";
        } else {
            int hoursEarly = timedifferenceinminutes / 60;
            int minutesEarly = timedifferenceinminutes % 60;
            return "Early\n" + to_string(hoursEarly) + ":" + (minutesEarly < 10 ?  "0" : "") + to_string(minutesEarly) + " hours before the start";
        }
    } else {
        return "On time";
    }
}

