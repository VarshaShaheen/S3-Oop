#include <iostream>
using namespace std;

class data
{
    int i;
    float j;
    double d;
public:void getdata()
    {
        cin>>i>>j>>d;
    }
};
int main()
{
    data d1 ,d2;
    cout<<"d1 ="<<sizeof(d1)<<endl;
    cout<<"d2="<<sizeof(d2)<<endl;
    cout<<"data="<<sizeof(data)<<endl;
    return 0;
}

