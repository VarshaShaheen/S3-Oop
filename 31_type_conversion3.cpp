#include <iostream>
#include <math.h>
using namespace std;

class rectangle{
private:
    float x,y;
public:
    friend class polar;

    void show(){
        cout<<"x: "<<x<<" y: "<<y<<endl;
    }
};
class polar{
    int angle,radius;
public:
    polar(){
        cout<<"Enter angle and radius: ";
        cin>>angle>>radius;
    }
    operator rectangle(){
        rectangle ob;
        ob.x=radius*cos(angle);
        ob.y=radius*sin(angle);
        return ob;
    }
};


int main(){
    polar p;
    rectangle r;
    r=p;
    r.show();
    return 0;
}