#include<iostream>
using namespace std;
 int fab(int n){
    if(n<2){
        return 1;
    }
    return fab(n-2)+fab(n-1);
 }
int main()
{
    int a;
    cout<<"enter the value of a : "<<endl;
    cin>>a;
        
     cout<<"the value fabonacci sequence of "<<a<<" is : "<<fab(a)<<endl;

    return 0;
}