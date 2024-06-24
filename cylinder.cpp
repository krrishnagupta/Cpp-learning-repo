#include <iostream>
#include <math.h>
using namespace std;

/*int main()
{
    int r, h;
    float pi = 3.14;

    cout << "calculate the area of cylinder" << endl;

    cout << "enter the radius of cylinder : " << endl;
    cin >> r;

    cout << "enter the hight of cylinder : " << endl;
    cin >> h;

    float area = (2 * pi * r * h);

    cout << "the area of cylinder is : " << area << endl;

    return 0;
}*/

int main()
{
    int a, b, c;

        cout << "calculate the area of any triangle by heron's formula" << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "enter the first side of triangle" << endl;
    cin >> a;

    cout << "enter the second side of triangle" << endl;
    cin >> b;

    cout << "enter the third side of triangle" << endl;
    cin >> c;

    float s = (a + b + c) / 2;

    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "The area of triangle is : " << area << endl;
}