#include <iostream>
using namespace std;

int main()
{
    int Roll;
    cout << "Enter your Roll number";
    cin >> Roll;

    if (Roll < 1)
    {
        cout << "Invalid roll";
    }
    else
    {
        cout << "Valid roll";
    }
    return 0;
}