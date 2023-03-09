//Write a class to read integer values for day,month and year and outputs in the following format.
//25,10,2021-----------> 25 Oct 2021

#include <iostream>
#include <string>
using namespace std;

class date{
    int day,month,year;
    string mont[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
public:
    void getdata(){
        cout<<"Enter day: ";
        cin>>day;
        cout<<"Enter month: ";
        cin>>month;
        cout<<"Enter year: ";
        cin>>year;
    }
    void display(){
        cout<<day<<"/"<<mont[month-1]<<"/"<<year;
    }
};

int main(){
    date d;
    d.getdata();
    d.display();
    return 0;
}