#include<iostream>
using namespace std;

int fact(int n){
    if(n<1){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int a;
    cout<<"enter the value of a: "<<endl;
    cin>>a;

    cout<<"the factorial of "<<a<<" is : "<<fact(a)<<endl;
    
    return 0;
}