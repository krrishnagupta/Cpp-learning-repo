#include<iostream>
using namespace std;

    struct car
    {
        string brand;
        string model;
        int year;
    };
                                               /*do tarah se hum struct ko define kar sakte he*/
int main() 
{     
//    struct 
//     {
//         string brand;
//         string model;
//         int year;
//     }mycar1, mycar2, mycar3;

    car mycar1;
    mycar1.brand = "TATA";
    mycar1.model = "XT5";
    mycar1.year = 1983;
   
   car mycar2;
   mycar2.brand = "Honda";
   mycar2.model = "splender";
   mycar2.year = 1985;

    car mycar3;
   mycar2.brand = "Honda";
   mycar2.model = "splender";
   mycar2.year = 1985;

   cout<<mycar1.brand<<" "<<mycar1.model<<" "<<mycar1.year<<endl;

   cout<<mycar2.brand<<" "<<mycar2.model<<" "<<mycar2.year<<endl;
    return 0;
}

