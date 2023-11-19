#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
  string name;
  int age;

  Person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
};

int main()
{
  Person *rakib = new Person("Rakib Ahmed", 23);
  Person *sakib = new Person("Sakib Ahmed", 25);

  // rakib->name = sakib->name;
  // rakib->age = sakib->age;

  // alternative
  *rakib = *sakib;

  cout << rakib->name << " " << rakib->age << endl;
  cout << sakib->name << " " << sakib->age << endl;
  return 0;
}