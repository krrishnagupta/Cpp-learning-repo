#include<iostream>
using namespace std;

int main()
{
    int marks[] = {52, 55, 48,50};
    //marks[2] = 70;
    
    for (int i=0; i<4; i++)
    {
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
        cout <<"the size of array is: "<<sizeof(marks)<<endl;
    }

    int*p = marks; 

      cout<<*(p++)<<endl; 
      cout<<*(++p)<<endl;          
    /*cout<<"the value of *p is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;*/

    return 0;
}