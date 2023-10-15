string decideActivity(string temperature,string humidity){
    if(temperature=="warm"&&humidity=="dry"){
        cout<<"Recommended activity: Play tennis";
    }
    
    if(temperature=="warm"&&humidity=="humid"){
        cout<<"Recommended activity: Swim";
    }
    
    if(temperature=="cold"&&humidity=="dry"){
        cout<<"Recommended activity: Play basketball";
    }
    
    if(temperature=="cold"&&humidity=="humid"){
        cout<<"Recommended activity: Watch TV";
    }
    string calculateGrade(float average) {
    if (average >= 90) {
        return "A+";
    } else if (average >= 80) {
        return "A";
    } else if (average >= 70) {
        return "B+";
    } else if (average >= 60) {
        return "B";
    } else if (average >= 50) {
        return "C";
    } else if (average >= 40) {
        return "D";
    } else {
        return "F";
    }
}
string findZodiacSign(int day, string month)
{
    string result;
    if ((month == "March" && (day >= 21 && day <= 31)) || (month == "April" && (day >= 1 && day <= 19)))
    {
        result = "Aries";
    }
    if ((month == "April" && (day >= 20 && day <= 30)) || (month == "May" && (day >= 1 && day <= 20)))
    {
        result = "Taurus";
    }
    if ((month == "May" && (day >= 21 && day <= 31)) || (month == "June" && (day >= 1 && day <= 20)))
    {result = "Gemini";
    }
    if ((month == "June" && (day >= 21 && day <= 30)) || (month == "July" && (day >= 1 && day <= 22)))
    { result = "Cancer";
    }
    if ((month == "July" && (day >= 23 && day <= 31)) || (month == "August" && (day >= 1 && day <= 22)))
    {  result = "Leo";
    }
    if ((month == "August" && (day >= 23 && day <= 31)) || (month == "September" && (day >= 1 && day <= 22)))
    { result = "Vigro";
    }
    if ((month == "September" && (day >= 23 && day <= 30)) || (month == "October" && (day >= 1 && day <= 22)))
    {
        result = "Libra";
    }
    if ((month == "October" && (day >= 23 && day <= 31)) || (month == "November" && (day >= 1 && day <= 21)))
    {      result = "Scorpio";
    }
    if ((month == "November" && (day >= 22 && day <= 30)) || (month == "December" && (day >= 1 && day <= 21)))
    { result = "Sagittarius";
    }
    if ((month == "December" && (day >= 22 && day <= 31)) || (month == "January" && (day >= 1 && day <= 19)))
    { result = "Capricon";
    }
    if ((month == "January" && (day >= 20 && day <= 31)) || (month == "February" && (day >= 1 && day <= 18)))
    {
        result = "Aquarius";
    }
    return result;
}
float cellularcompany(char code, string time, int min){
    float res;
    if(time=="N"||time=="n"){
    res = 25;
    if(min > 100){
    min=min- 100;
    res =res+min* 0.05;
    }
    if (time=="D" || time=="d")
    {
    res = 25;
    if(min>75){
    min=min- 75;
    res =res+min*0.10;}
    }
}
    
else{
    res= 10.0;
    if(min>50){
    min=min- 50;
    res=res+min* 0.20;}
    }
    return res;

}
float calculateFruitPrice(string fruit, string day, double quantity)
{       
    float price;
    
    if (day == "Saturday"||day == "Sunday")
    {
        if(fruit == "banana")
        {
            price = 2.70*quantity;
        
        }
         if (fruit == "apple")
        {
            price = 1.25*quantity;
            
        }
         if(fruit == "orange")
        {
            price = 0.90*quantity;
           
        }
         if(fruit == "grapefruit")
        {
            price = 1.60*quantity;
            

        }
         if(fruit == "kiwi")
        {
            price = 3.00*quantity;
            
        }
        if(fruit == "pineapple")
        {
            price = 5.60*quantity;
            
        }
         if(fruit == "grapes")
        {
            price = 4.20*quantity;}     
         }

 if (day == "Monday"||day == "Tuesday"||day == "Wednesday"||day == "Thursday"||day == "Friday")
    { 
         if(fruit == "banana")
        {
            price = quantity*2.50;
        }
        if (fruit == "apple")
        {
            price = quantity*1.20;
        }
        if (fruit == "orange")
        {
            price = quantity*0.85;
        }
        if (fruit == "grapefruit")
        {
            price = quantity*1.45;
        }
        if (fruit == "kiwi")
        {
            price = quantity*2.70;
        }
        if (fruit == "pineapple")
        {
            price = quantity*5.50;
        }
        if (fruit == "grapes")
        {
            price = quantity*3.85;}
          
    }
    return price;
}
string calculateHotelPrices(string month, int numberOfStays){
    float studioPrice =0.0;
    float apartmentPrice= 0.0;

    if (month=="May"||month=="October") {
        studioPrice=50.0*numberOfStays;
        apartmentPrice=65.0*numberOfStays;

        if (numberOfStays>7 && numberOfStays<= 14) {   
            studioPrice=numberOfStays*50;
            studioPrice=studioPrice-(studioPrice*0.05);
        apartmentPrice=65.0*numberOfStays;
            
            }  
         else if (numberOfStays>14) {
            studioPrice =numberOfStays*35;  
            apartmentPrice =numberOfStays* 58.5; 
        }
    } else if (month=="June"||month== "September") {
        if(numberOfStays>7&&numberOfStays<=14)
        studioPrice= 75.199994*numberOfStays;
        apartmentPrice= 68.70*numberOfStays;

        if (numberOfStays>14) {
            studioPrice =studioPrice-(studioPrice*0.2) ;  
            apartmentPrice =apartmentPrice*1;  
        }
    } else if(month == "July"||month == "August"){
        studioPrice= 76.0 * numberOfStays;
        apartmentPrice= 69.3 * numberOfStays;
    }

    string result="Apartment: "+ to_string(apartmentPrice)+"$.\nStudio: " + to_string(studioPrice) + "$.";
    return result;
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

int calculatevolleyballgame(string year, int holiday, int week){
    int sum,value;
    
    if(year=="leap"){
        week=week*(3/4);
        holiday=holiday*(2/3);
        sum=holiday+week;
        value=48-48*0.15;
        value=value+sum+1;
    }
    else{
week=week*(3/4);
        holiday=holiday*(2/3);
        sum=holiday+week;
        value=48-48*0.15;
        value=value+sum;
        value=value-value*0.15;
        if(value>=44){
            value=value+2;
value=value+1;
        }
    } return value;
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






        
       
      
       
  
       
       