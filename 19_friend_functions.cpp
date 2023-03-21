//Write two classes rectangle and circle and a friend function acting as a bridge between the classes to find the
//area of rectangle - area of circle.

#include <iostream>
using namespace std;

class circle;
class rectangle{
private:
    int l,b,a;
public:
    void init(){
        cout<<"Enter length and breadth of rectangle: "<<endl;
        cin>>l>>b;
    }
    void area(){
        a=l*b;
    }
    friend void bridge(rectangle ,circle);
};

class circle{
private:
    int r;
    float ar;
public:
    void init(){
        cout<<"Enter radius of circle: "<<endl;
        cin>>r;
    }
    void area(){
        ar=3.14*r*r;
    }
    friend void bridge(rectangle ,circle);
};

void bridge(rectangle ob1,circle ob2){
    float area;
    area=ob1.a-ob2.ar;
    cout<<"Area of rectangle - area of circle is: "<<area<<endl;
}

int main(){
    rectangle a;
    circle b;
    a.init();
    b.init();
    a.area();
    b.area();
    bridge(a,b);
}