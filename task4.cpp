#include<iostream>
#include<cmath>
using namespace std;
int projectTimeCalculation(float days, float workers, float hours);
 main()
{   float hours, days, workers;
    cout<<"Enter the needed hours: ";
    cin>> hours;
    cout<< "Enter the days that the firm has: ";
    cin>> days;
    cout<< "Enter the number of all workers: ";
    cin>> workers;
    int totalhours=projectTimeCalculation(days,workers, hours);
     if (hours>totalhours)
    {
        int additionalHours= totalhours-hours;
        cout<<"Not enough time!"<<abs(additionalHours)<< "hours needed.";
    }
    else 
    {   int hoursLeft=hours-totalhours; 
        cout<< "Yes!"<< abs(hoursLeft)<< "hours left.";
    }
}

int projectTimeCalculation(float days, float workers, float hours)
{   float dayscantwork= days*0.1;
    float daysCanWork= days-dayscantwork;
    float totalhours = daysCanWork * 10 * workers;
    return totalhours;
}