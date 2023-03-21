//
// Created by Varsha on 21-03-2023.
//
//Write class with overloaded constructors to initialise the triangle. Find the area
//of the triangle.

#include <iostream>
#include <cmath>
using namespace std;

class triangle{
private:
    int a,b,c;
public:
    triangle(int x){
        a=b=c=x;
    }
    triangle(int x, int y){
        a = b = x;
        c = y;
    }
    triangle(int x,int y,int z){
        a = x;
        b = y;
        c= z;
    }
    void find_area(){
        float s = (a+b+c)/2;
        cout<<"Area of triangle: "<<sqrt(s*(s-a)*(s-b)*(s-c));
    }
};

int main(){
    int a,b,c;
    cout<<"Enter side of equilateral triangle: ";
    cin>>a;
    triangle t1(a);
    t1.find_area();
    cout<<endl;
    cout<<"Enter base and height of isosceles triangle: ";
    cin>>a>>b;
    triangle t2(a,b);
    t2.find_area();
    cout<<endl;
    cout<<"Enter sides of triangle: ";
    cin>>a>>b>>c;
    triangle t3(a,b,c);
    t3.find_area();
    return 0;
}