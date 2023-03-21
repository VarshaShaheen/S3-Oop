/*Write two classes representing savings account and current account,and each has its own
balance amount. Design a friend function which transfers certain amount from current
account to savings account. */

#include<iostream>
using namespace std;

class current;
class savings{
private:
    float sav=1000;
public:
    friend void transfer(savings &a,current &b);
};

class current{
private:
    float cur=500;
public:
    friend void transfer(savings &a,current &b);
};

void transfer(savings &a,current &b){
    float x;
    cout<<"Enter the amount to be transferred:";
    cin>>x;
    if(x <= b.cur){
        a.sav+=x;
        b.cur-=x;
        cout<<"Savings account balance: "<<a.sav<<endl;
        cout<<"Current account balance: "<<b.cur<<endl;
    }
    else{
        cout<<"Insufficient balance in current account"<<endl;
    }
}

int main(){
    savings s;
    current c;
    transfer(s,c);
    return 0;
}