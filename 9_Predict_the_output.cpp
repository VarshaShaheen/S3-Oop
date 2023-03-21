//
// Created by Varsha on 21-03-2023.
//
#include <iostream>
using namespace std;

int sum(int i, int j=10, int k=15, int l=20);

int main()
{ int a=2,b=3,c=4,d=5,res;
    res=sum(a,b,c,d);
    cout<<"value of res: " <<res<<endl;
    res=sum(a,b,c);
    cout<<"value of res: " <<res<<endl;
    res=sum(a,b);
    cout<<"value of res: " <<res<<endl;
    res=sum(b,c,d);
    cout<<"value of res: " <<res<<endl;
    return 0;
}

int sum(int i,int j,int k,int l) {
    return (i + j + k + l);
}
