#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "tell me your age" << endl;
    cin >> age;

    if (age <= 18)

    {
        if (age <= 0)
        {
            cout << "you are not born yet" << endl;
        }
        else
        {
            cout << "you are teenager" << endl;
        }
    }

    else if (age >= 18)
    {
        cout << "you are an adult";
    }
    return 0;
}
