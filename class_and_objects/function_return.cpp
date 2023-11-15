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

Student *fun()
{
  Student sojib(12, 12, 3.4);
  Student *p = &sojib;
  return p;
}

int main()
{
  Student *ans = fun();
  cout << (*ans).cls << " " << (*ans).roll << " " << (*ans).gpa << endl;
  return 0;
}