#include<iostream>
using namespace std;
 
 void f(int num[5]){
    for(int i=0; i<5; i++){
        cout<<num[i]<<endl;
    }
 }
int main()
{
    int num[5] = {1, 2, 3, 4, 5};

    f(num);
    return 0;
}