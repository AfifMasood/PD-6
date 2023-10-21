#include <iostream>
using namespace std;
float calculateHotelPrices1(string month, float numberOfStays);
string calculateHotelPrices2(string month, int numberOfStays);
main()
{
 float output1, output2;
 string mon;
 float stay;
 cout<<"Enter the month (May, June, July, August, September, October): ";
 cin>> mon;
 cout<<"Enter the number of stays: ";
 cin>> stay;
 output1 = calculateHotelPrices1(mon, stay);
 cout<<"Apartment: "<<output1<<"$"<<endl;
}
float calculateHotelPrices1(string month, float numberOfStays)
{
 float result;
 if ((month == "May" && numberOfStays<=14) || (month == "October" && numberOfStays<=14))
 {
  result = 65*numberOfStays;
  return result;
 }
 else if ((month == "May" && numberOfStays>14) || (month == "October" && numberOfStays>14))
 {
  result = (65*numberOfStays)-((10*(65*numberOfStays))/100);
  return result;
 }
 else if ((month == "June" && numberOfStays<=14) || (month == "September" && numberOfStays<=14))
 {
  result = 68.70*numberOfStays;
  return result;
 }
 else if ((month == "June" && numberOfStays>14) || (month == "September" && numberOfStays>14))  
 {
  result = (68.70*numberOfStays)-((10*(68.70*numberOfStays))/100);
  return result;
 }
 else if ((month == "July" && numberOfStays<=14) || (month == "August" && numberOfStays<=14))
 {
  result = 77*numberOfStays;
  return result;
 }
 else if ((month == "July" && numberOfStays>14) || (month == "August" && numberOfStays>14))
 {
  result = (77*numberOfStays)-((10*(77*numberOfStays))/100);
  return result;
 }
}





















