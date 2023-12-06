#include <bits/stdc++.h>
using namespace std;

namespace Rakib
{
    int age = 24;
    void hello()
    {
        cout << "Hello form Rakib!" << endl;
    }
}

namespace Sakib
{
    int age2 = 34;
    void hello2()
    {
        cout << "Hello form Sakib!" << endl;
    }
}

using namespace Rakib;
using namespace  Sakib;
int main()
{
    cout << age << endl;
    cout << age2 << endl;
    return 0;
}