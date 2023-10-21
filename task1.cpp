#include <iostream>
using namespace std;
string decideActivity(string temp, string humid);
main()
{
 string temperature, humidity, output;
 cout<<"Enter temperature (warm or cold): ";
 cin>> temperature;
 cout<<"Enter humidity (dry or humid): ";
 cin>> humidity;
 output = decideActivity(temperature, humidity);
 cout<<"Recommended activity: "<<output;
}
string decideActivity(string temp, string humid)
{
 if (temp == "warm" && humid == "dry") return "Play tennis";
 if (temp == "warm" && humid == "humid") return "Swim";
 if (temp == "cold" && humid == "dry") return "Play basketball";
 if (temp == "cold" && humid == "humid") return "Watch TV";
 return "null";
}