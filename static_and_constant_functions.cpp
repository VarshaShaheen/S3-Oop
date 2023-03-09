/*Write a program to find the results of a set of students in one subject.The
maximum and the pass marks for the subject are available as static data. The
student is passed if he/she secures more than the pass marks. Use a static
member function for calculating the result and a constant member function for
printing the results. */

#include <iostream>
#include <string>
using namespace std;

class marks{
private:
    static int max_mark,pass_mark;
public:
    static string result(int a){
        if (a>=pass_mark && a<=max_mark)
            return "Pass";
        else if(a<pass_mark && a<=max_mark){
            return "Fail";
        }
        else{
            return "Invalid";
        }

    }
    void display(int a) const{
        cout<<result(a);
    }
};
int marks::pass_mark=40;
int marks::max_mark=100;

int main(){
    marks m;
    float a;
    cout<<"Enter the marks";
    cin>>a;
    m.display(a);
}