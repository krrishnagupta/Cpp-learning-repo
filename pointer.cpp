#include<iostream>
using namespace std;

int main()
{
        /*pointer*/
    int a = 5;
    int*b = &a;
    cout<<"the value of b "<<b<<endl;   /*<<&a*/



        /*pointer to pointer*/
    int e = 3;
    int*f = &e;
    int**g = &f;
    int***h = &g;
    cout<<"the value of f "<<f<<endl;
    cout<<"the value of g "<<g<<endl;
    cout<<"the value of h "<<h<<endl;
    return 0;
} 