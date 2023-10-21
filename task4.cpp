#include <iostream>
using namespace std;

float amountDueRegular(int min); 
float amountDuePremium(int min, char day);

main()
{
 char serviceCode, dayTime;
 int minutes;
 cout<<"Enter the service code (R/r for regular, P/p for premium): ";
 cin>> serviceCode;
 
 if ((serviceCode == 'R') || (serviceCode == 'r'))
 {
 float output1;
 output1 = amountDueRegular(minutes);
 cout<<"Amount Due: $"<<output1<<endl;
 }
 
  if ((serviceCode == 'P') || (serviceCode == 'p'))
 {
  float output2;
  output2 = amountDuePremium(minutes, dayTime);
  cout<<"Amount Due: $"<<output2<<endl;
 }
 
}

float amountDueRegular(int min)
{
 float result;
 cout<<"Enter the number of minutes used: ";
 cin>> min;
 cout<<"Service Type: Regular"<<endl;
 cout<<"Total Minutes Used: "<<min<<" minutes"<<endl;
 if (min > 50)
 {
  result = 10 + ((min - 50) * 0.20);
  return result;
 }
 if (min<=50) return 10;
} 

float amountDuePremium(int min, char day)
{ 
 float result;
 cout<<"Enter time of the call (D/d for day, N/n for night): ";
 cin>> day;
 cout<<"Enter the number of minutes used: ";
 cin>> min;
 cout<<"Service Type: Premium"<<endl;
 cout<<"Total Minutes Used: "<<min<<" minutes"<<endl; 
 if ((day == 'N') || (day == 'n'))
 {
  if (min<=100) return 25;
  if (min>100)
  {
   result = 25 + ((min - 100) * 0.05);
   return result;
  }
 }

 if ((day == 'D') || (day == 'd'))
 {
  if (min<=75) return 25;
  if (min>75) 
  {
   result = 25 + ((min - 75) * 0.10);
   return result;
  }
 }
 return 0;
} 
 
 
 











 