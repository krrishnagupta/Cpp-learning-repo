#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    int*c = &a;
    int*d = &b;

    cout<<"the value of c: "<<*c<<endl;
    cout<<"the value of d: "<<*d<<endl;
    return 0;
}