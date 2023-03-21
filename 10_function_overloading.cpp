//Write overloaded functions of volume() that returns the volume of different
//structures, cube,cylinder,sphere and cuboid.

#include <iostream>
using namespace std;

float volume(float a){
    return a*a*a;
}

float volume(float r,float h){
    return 3.14*r*r*h;
}

float volume(int r){
    return 4*3.14*r*r*r/3;
}

float volume(float a,float b,float c){
    return a*b*c;
}

int main(){
    float a,b,c;
    int r;
    cout<<"Enter side of cube: ";
    cin>>a;
    cout<<"Volume of cube: "<<volume(a)<<endl;
    cout<<"Enter radius and height of cylinder: ";
    cin>>a>>b;
    cout<<"Volume of cylinder: "<<volume(a,b)<<endl;
    cout<<"Enter radius of sphere: ";
    cin>>r;
    cout<<"Volume of sphere: "<<volume(r)<<endl;
    cout<<"Enter length, breadth and height of cuboid: ";
    cin>>a>>b>>c;
    cout<<"Volume of cuboid: "<<volume(a,b,c)<<endl;
    return 0;
}