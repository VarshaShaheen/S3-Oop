//
// Created by Varsha on 21-03-2023.
//
//Define a class circle with a member function to find the area
//of a circle given the radius. Derive a class cylinder from this
//and find the volume of it with the help of the area function
//defined in the circle class.

#include <iostream>
using namespace std;

class circle{
protected:
    float radius;
public:
    void get_radius(){
        cout<<"Enter radius:";
        cin>>radius;
    }
    float area(){
        return 3.14*radius*radius;
    }
};

class cylinder: public circle{
    float height;
public:
    void get_height(){
        cout<<"Enter height:";
        cin>>height;
    }
    float volume(){
        return area()*height;
    }
};

int main(){
    cylinder c;
    c.get_radius();
    c.get_height();
    cout<<"Volume of cylinder: "<<c.volume()<<endl;
    return 0;
}
