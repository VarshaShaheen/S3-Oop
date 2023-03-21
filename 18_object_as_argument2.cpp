//
// Created by Varsha on 21-03-2023.
//
//Write a program to find the radius of a circle with area equal to that of the
//rectangle.The function radius_for_eq_area() should take an argument an object of
//the class rectangle

#include <iostream>
#include <cmath>
using namespace std;

class rectangle{
private:
    int l,b,rect_area;
public:
    void init(){
        cout<<"Enter the length and breadth: ";
        cin>>l>>b;
    }
    int find_area(){
        rect_area = l*b;
        return rect_area;
    }
};

class circle{
private:
    int circle_area;
    float radius;
public:
    void radius_for_eq_area(rectangle r){
        circle_area = r.find_area();
        radius = sqrt(circle_area/3.14);
        cout<<"\nRadius of circle: "<<radius;
    }
};

int main(){
    rectangle r;
    circle c;
    r.init();
    c.radius_for_eq_area(r);
}