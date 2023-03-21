//overloading + operator to add time objects

#include <iostream>
using namespace std;
class Time{
private:
    int hr,min,sec;
public:
    void init(){
        cout << "Enter time in hh:mm:ss format: ";
        cin >> hr >> min >> sec;
    }
    Time operator +(Time ob2){
        Time ob3;
        ob3.sec = ob2.sec + sec;
        ob3.min = ob2.min +min;
        ob3.hr = ob2.hr + hr;
        ob3.min += ob3.sec/60;
        ob3.sec %= 60;
        ob3.hr += ob3.min/60;
        ob3.min %= 60;
        return ob3;
    }
    void display(){
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
};
int main(){
    Time ob1,ob2,ob3;
    ob1.init();
    ob2.init();
    ob3 = ob1 + ob2;
    ob3.display();
}