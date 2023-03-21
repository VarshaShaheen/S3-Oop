//
// Created by Varsha on 21-03-2023.
//
#include <iostream>
using namespace std;

int count=0;
class test {
public:
    test()
    {
        count++;
        cout<<"constructor creates object no"<<count<<endl;
    }
    ~test()
    {
        cout<<"Destructor for object"<<count<<"is executed"<<endl;
        count--;
    }
};

int main()
{
    cout<<"inside main"<<endl;
    test T1;
    {
        cout<<"in Block"<<endl;
        test T2,T3;
    }
    cout<<"Back in main"<<endl;
    return 0;
}