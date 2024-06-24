#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}
int main()
{
    int a, b;
    cout<<"enter the no. "<<endl;
    cin>>a;
    cout<<"enter the no. "<<endl;
    cin>>b;

    cout<<"before swap: "<<endl;
    cout<<a<<b<<endl;
    swap(a,b);
    cout<<"after swap : "<<endl;
    cout<<a<<b;
    return 0;
}