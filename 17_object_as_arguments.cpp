//Adding two time objects to get the sum in time format

#include <iostream>
using namespace std;

class Time{
private:
    int hr,min,sec;
public:
    void input(){
        cout<<"Enter the time in hh:mm:ss format"<<endl;
        cin>>hr>>min>>sec;
    }
    void show(){
        cout<<"The time is "<<hr<<":"<<min<<":"<<sec<<endl;
    }
    void add(Time t1,Time t2){
        sec=t1.sec+t2.sec;
        min=t1.min+t2.min+(sec/60);
        hr=t1.hr+t2.hr+(min/60);
        sec=sec%60;
        min=min%60;
    }
};

int main(){
    Time t1,t2,t3;
    t1.input();
    t2.input();
    t3.add(t1,t2);
    t3.show();
}

