//
// Created by Varsha on 21-03-2023.
//
#include <iostream>
using namespace std;

class item
{
    static int count; //count is static
    int number;
public:
    void zero()
    { number= 0;
    }
    void getcount()
    {
        ++count;
        ++number;
        cout<<"value of count:"<<count<<endl;
        cout<<"value of number"<<number<<endl;
    }
};
int item :: count =5;

int main()
{
    item a,b,c;
    a.zero();
    b.zero( );
    c.zero( );
    cout<<"after assigning data : "<<endl;
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}
