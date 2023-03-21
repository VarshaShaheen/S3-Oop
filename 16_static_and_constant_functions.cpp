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
    int mark;
public:
    void init(int a){
        mark=a;
    }
    static string result(int a){
        if (a>=pass_mark && a<=max_mark)
            return "Pass";
        else if(a<pass_mark){
            return "Fail";
        }
        else{
            return "Invalid";
        }

    }
    void display() const{
        cout<<result(mark)<<endl;
    }
};
int marks::pass_mark=40;
int marks::max_mark=100;

int main(){
    marks m[100];
    int n, i;
    float a;
    cout<<"Enter the number of students:"<<endl;
    cin>>n;
    cout<<"Enter the marks";
    for(i=0;i<n;i++){
        cin>>a;
        m[i].init(a);
    }
    for(i=0;i<n;i++){
        cout<<"Student "<<i+1<<" is ";
        m[i].display();
    }
    return 0;
}