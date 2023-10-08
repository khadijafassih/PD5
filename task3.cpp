#include<iostream>
using namespace std;
char type;
float taxCalculator(char type, float price)
{    float tax;
     if(type =='E')
    {
      tax= price*0.08;
    }
     if(type =='M')
    {
      tax= price*0.06;
    } if(type =='S')
    {
      tax= price*0.1;
    } if(type =='V')
    {
      tax= price*0.12;
    } if(type =='T')
    {
      tax= (price*15)/100;
    }
    return tax;
}
main()
{   int price;
    float fprice;
    cout << "Enter the vehicle type code (M,E,S,V,T): ";
    cin>> type;
    cout << "Enter the price of the vehicle: $";
    cin>> price;
    float tax= taxCalculator(type,price);
    fprice = price+ tax;
    cout << "The final price of the vehicle of type "<< type<< " after adding the tax is:"<<fprice ;
}