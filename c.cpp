#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"tell me your age :"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
      cout<<"your are an adult"<<endl;
        break;
    case 10:
      cout<<"your are an child"<<endl;
        break;

    default:
    cout<<"no special case"<<endl;
        break;
    } 
    
    return 0;
}
