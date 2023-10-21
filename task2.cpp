#include <iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
main()
{
 string name, output2;
 float markEng, markMath, markChem, markSS, markBio, averg;
 cout<<"Enter student name: ";
 cin>> name;
 cout<<"Enter marks for English: ";
 cin>> markEng;
 cout<<"Enter marks for Maths: ";
 cin>> markMath;
 cout<<"Enter marks for Chemistry: ";
 cin>> markChem;
 cout<<"Enter marks for Social Science: ";
 cin>> markSS;
 cout<<"Enter marks for Biology: ";
 cin>> markBio;
 cout<<"Student Name: "<<name<<endl;
 averg = calculateAverage (markEng, markMath, markChem, markSS, markBio);
 output2 = calculateGrade (averg);
 cout<<"Percentage: "<<averg<<"%"<<endl;
 cout<<"Grade: "<<output2;
}
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
 float average;
 average = ((marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology)*100)/500;
 return average;
}

string calculateGrade(float average)
{
 if (average >= 90 && average < 100) return "A+";
 if (average >= 80 && average < 90) return "A";
 if (average >= 70 && average < 80) return "B+";
 if (average >= 60 && average < 70) return "B";
 if (average >= 50 && average < 60) return "C";
 if (average >= 40 && average < 50) return "D";
 if (average <40) return "F";
 return "null";
}


 
 




