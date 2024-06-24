#include<iostream>
using namespace std;

  /*  int main()
    {
        int n, i = 1, limit;
        cout<<"enter the value of n: ";
        cin>>n;
        cout<<"enter the limit";
        cin>>limit;

            while (i<=10)
            {
               cout<<n<<" * "<<i<<" = "<<n*i<<endl;
               i++;
            }
            
        return 0;
    }*/
                        /*do-while*/
    int main()
    {
        int n,i=1;
        cout<<"enter the value of n: "<<endl;
        cin>>n;
        do
        {
            cout<<n<<" * "<<i<<" = "<<n*i<<endl;
            i++;
        } while (i<=10);

       return 0; 
    }
    