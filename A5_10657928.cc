#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;
struct studentData
{
  string studentName[5];
  int studentID[5];
  int studentAge[5];
  char studentGender[5];
  double studentScore[5];
  char studentGrade[5];
};
int main()
{ 
  studentData Access;
  int mCount=0,fCount=0,TotalAge=0;
  double aveScore=0,TotalScore=0,aveAge=0;
  for(int i=0;i<5;i++)

 {
  cout<<"Input student "<<i+1<<"'s name and press enter"<<endl;
 cin>>Access.studentName[i];
 cout<<"Input student "<<i+1<<"'s ID and press enter"<<endl;
 cin>>Access.studentID[i];
 cout<<"Input student "<<i+1<<"'s age and press enter"<<endl;
 cin>>Access.studentAge[i];
 TotalAge=TotalAge+Access.studentAge[i];
 cout<<"Input student "<<i+1<<"'s gender, \"F\" for female or \"M\" for male and press enter"<<endl;
 cin>>Access.studentGender[i];
if (Access.studentGender[i]=='f')
    fCount++;
 else if (Access.studentGender[i]=='m')
    mCount++;
cout<<"Input student "<<i+1<<"'s score and press enter"<<endl;
cin>>Access.studentScore[i];
TotalScore=TotalScore+Access.studentScore[i];
if (Access.studentScore[i] >= 90)
Access.studentGrade[i]= 'A';
else if (Access.studentScore[i] >= 80)
Access.studentGrade[i]= 'B';
else if (Access.studentScore[i] >= 70)
Access.studentGrade[i] = 'C';
else if (Access.studentScore[i] >= 60)
Access.studentGrade[i]= 'D';
else
Access.studentGrade[i]= 'F';
 }
 aveAge=TotalAge/5;
 aveScore=TotalScore/5;

//output into file
ofstream std;
std.open("new.txt", ios::app);
std<<"**************************************************************"<<endl;
std<<"ID number"<<"\tName"<<"\tAge"<<"\tGender"<<"\tScore"<<"\tGrade"<<endl;
for(int i=0;i<5;i++)
   {
    std<<i+1<<"."<<Access.studentID[i]<<"\t\t"<<Access.studentName[i]<<"\t"<<Access.studentAge[i]<<"\t"<<Access.studentGender[i];
    std<<"\t"<<Access.studentScore[i]<<"\t"<<Access.studentGrade[i]<<endl;
   }
    std<<endl;
    std<<"The average age is "<<round(aveAge)<<endl;
    std<<"The average score is "<<aveScore<<endl;
    std<<"The total number of males is "<<mCount<<endl;
    std<<"The total number of females is "<<fCount<<endl;
    std.close();

   return 0;
}
