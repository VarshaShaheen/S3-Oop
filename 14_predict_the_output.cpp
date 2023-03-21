//
// Created by Varsha on 21-03-2023.
//
#include <iostream>
using namespace std;

class beta
{ private:
    static int c;
public:
    static void count(){
        c++;
    }
    static void display()
    {
        cout<<"value of c: " <<c<<endl;
    }
};
int beta::c=0;
int main()
{   beta::display();
    beta::count();
    beta::count();
    beta::display();
}
