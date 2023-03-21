//
// Created by Varsha on 21-03-2023.
//
//Repeat the question cylinder deriving from circle by including only parameterised constructors in both
//the classes.

#include <iostream>
using namespace std;

class circle{
protected:
    float radius;
public:
    circle(float r){
        radius=r;
    }
    float area(){
        return 3.14*radius*radius;
    }
};

class cylinder: public circle{
    float height;
public:
    cylinder(float r,float h):circle(r){
        height=h;
    }
    float volume(){
        return area()*height;
    }
};

int main(){
    float r,h;
    cout<<"Enter radius and height of cylinder:";
    cin>>r>>h;
    cylinder c(r,h);
    cout<<"Volume of cylinder: "<<c.volume()<<endl;
    return 0;
}
