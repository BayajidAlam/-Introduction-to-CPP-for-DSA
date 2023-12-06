#include <iostream>
#include <string>
using namespace std;

class Student 
{
    public:
        int id;
        string name;
        char section;
        int totalMarks;
};

void solve()
{
    Student students[3];

    for (int i = 0; i < 3; i++) 
    {
        cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
    }

    int maxMarks = -1, maxID = -1;

    for (int i = 0; i < 3; i++) 
    {
        if (students[i].totalMarks > maxMarks) 
        {
            maxMarks = students[i].totalMarks;
            maxID = students[i].id;
        }
        else if (students[i].totalMarks == maxMarks and students[i].id < maxID) 
        {
            maxID = students[i].id;
        }
    }

    for (int i = 0; i < 3; i++) 
    {
        if (students[i].id == maxID) 
        {
            cout << students[i].id << " " << students[i].name << " " << students[i].section << " " << students[i].totalMarks << endl;
            break;
        }
    }
}

int main() 
{
    int tc; cin >> tc;

    while (tc--) 
    {
        solve();
    }

    return 0;
}