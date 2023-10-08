#include<iostream>
#include<math.h>
using namespace std;
string output;
double volumePyramid(double l,double w,double h)
{   double volume;
    if(output=="meters")
    {
      volume=((l*w*h)/3);
    }
    else if (output=="centimeters")
    {
      volume=((l*w*h)/3)*(pow (10,6));
    }
     else if (output=="millimeters")
    {
      volume=((l*w*h)/3)*(pow (10,9));
    }
     else if (output=="kilometers")
    {
      volume=((l*w*h)/3)*(pow (10,-9));
    }
return volume;
}
main()
{
    double length, width, height;
    double vol;
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>length;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>width;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>>height;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>>output;
    vol = volumePyramid(length,width,height);
    cout << "The volume of th pyramid is: "<< vol<<"cubic"<< output;
}
