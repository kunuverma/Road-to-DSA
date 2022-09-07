#include <iostream>
using namespace std;
int main()

{
    int day;
    cout << "Enter day number";
    cin >> day;
    if (day == 1)
    {
        cout << "Mon" << endl;
    }
    else if (day == 2)
    {
        cout << "Tue";
    }
    else if (day == 3)
    {
        cout << "Wed";
    }
    else
    {
        cout << "Invalid day";
    }
    return 0;
}