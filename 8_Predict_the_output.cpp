//
// Created by Varsha on 21-03-2023.
//
#include <iostream>
using namespace std;
#define SQUARE(v) v*v

inline float square(float j)
{ return(j*j);
}

int main()
{ int p=3,q=3,r,s;
    r=square(++p);
    s=SQUARE(++q);
    cout<<"r=" <<r<<" s=" <<s;
    return 0;
}
