#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int cls;
  int roll;
  int cgpa;
  Student(int c, int r, int cgpa)
  {
    (*this).cls = c;
    (*this).roll = r;
    (*this).cgpa = cgpa;
  }
};

int main()
{
  Student rahim(6, 1, 3.0);

  cout << rahim.cls << " " << rahim.roll << " " << rahim.cgpa << endl;

  return 0;
}