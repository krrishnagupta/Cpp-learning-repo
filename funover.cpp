#include<iostream>
using namespace std;

    int funcint(int x, int y){
        return x + y;
    }

    double funcdouble(double x, double y){
        return x + y;
    }
int main()
{ int num1 = funcint(5,5);
  double num2 = funcdouble(1.5,1.5);

    cout<<"int: "<<num1<<endl;
    cout<<"doubel:"<<num2<<endl;
    
    return 0;
}