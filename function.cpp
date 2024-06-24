#include<iostream>
using namespace std;

// function prototype
int sum(int a, int b);

int main()
{
    int num1, num2;
    cout<<"enter the first no. = "<<endl;
    cin>>num1;
    cout<<"enter the second no. = "<<endl;
    cin>>num2;

    cout<<"the sum is = "<<sum(num1, num2);

    return 0;
}
    int sum(int a, int b){
    int c = a+b;
    return c;
}

/*#include<iostream>
using namespace std;

void function(string country = "norway"){     /*a parameter with an default value is often known as an "optional paramete",
                                                "country" is an a optional parameter and "norway" is the default value
    cout<<country<<endl;
}
int main()
{
    function("india");
    function("russia");
    function();
    function("USA");

    return 0;
}*/