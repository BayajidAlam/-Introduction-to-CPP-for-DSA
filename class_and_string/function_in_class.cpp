#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
  string name;
  int age;
  int marks1;
  int marks2;
  Person(string na, int ag, int m1, int m2)
  {
    name = na;
    age = ag;
    marks1 = m1;
    marks2 = m2;
  }

  void hello()
  {
    cout << "Hello" << endl;
  }
  int totalMarks()
  {
    return marks1 + marks2;
  }
};

int main()
{
  Person rakib("Rakib Ahsan", 34, 60, 80);
  cout << rakib.name << " " << rakib.age << endl;
  rakib.hello();
  cout << rakib.totalMarks();
  return 0;
}