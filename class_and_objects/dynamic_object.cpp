#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int roll;
  int cls;
  int gpa;
  Student(int roll, int cls, int gpa)
  {
    this->roll = roll;
    this->gpa = gpa;
    this->cls = cls;
  }
};

int main()
{
  Student rahim(2, 3, 4);
  Student *karim = new Student(3, 4, 2);
  cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;
  return 0;
}