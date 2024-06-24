#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
public:
    void read(void);
    void chk_binary(void);
    void ones_compliment(void);
    void display(void);
    
};
void binary::read(void)
{
    cout << "enter the binary number" << endl;
    cin >> s;
    
}

void binary::chk_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    chk_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
     cout<<"one's compliment : "<<endl;
}

void binary::display(void)
{
    cout << "display your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.chk_binary();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}