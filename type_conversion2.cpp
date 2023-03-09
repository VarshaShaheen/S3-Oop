//
// Created by Varsha on 09-03-2023.
//
//make a vector class vector, initialize x,y,z values assign the magnitude of the vector to a float variable

#include <iostream>
#include <cmath>
using namespace std;

class vector{
    int x,y,z;
public:
    void init(){
        cout<<"Enter the vector";
        cin>>x>>y>>z;
    }
    operator float(){
        float a;
        a = sqrt(x*x + y*y + z*z);
        return a;
    }
};

int main(){
    vector A;
    float x;
    A.init();
    x = A;
    cout<<x;
}