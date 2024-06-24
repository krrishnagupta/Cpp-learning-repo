                        /*Union program*/

#include<iostream>
using namespace std;
 
 union money
 {
    
    int rice;
    char car;
    float pounds;
 };
 
int main()
{
    union money m1;
    m1.rice = 50;
  
    cout<<m1.rice<<endl;
   
    return 0;
}
                                /*Enum program*/

#include<iostream>
using namespace std;

int main()
{
    enum meal {breakfast, lunch, dinner};
    meal m2 = lunch;
    meal m3 = dinner;
    meal m1 = breakfast;
    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;
    return 0;
}