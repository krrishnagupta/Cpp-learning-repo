#include<iostream>
using namespace std;

int main()
{
                   //2d array;
    string letters[2][3] = 
    {
        {"a", "b", "c"},
        {"d", "e", "f"}
    };
        for(int i = 0; i<2; i++){
          for(int j = 0; j<3; j++){
                cout<<"letters : "<<letters[i][j]<<endl;
            }
        }
    

    return 0;
}