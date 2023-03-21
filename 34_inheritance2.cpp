/*Write a C++ program to define a base class Item (item-no, name, price). Derive a class
Discounted-Item (discount-percent). A customer purchases 'n' items. Display the item-wise bill and ,total
amount and the total discount amount given.*/
#include <iostream>
#include <string>
using namespace std;

class item{
protected:
    int no,price;
    string name;
public:
    void init(){
        cout<<"Enter item no: ";
        cin>>no;
        cout<<"Enter item name: ";
        cin>>name;
        cout<<"Enter item price: ";
        cin>>price;
    }
    float actual_price(){
        return price;
    }
};
class discounted_item:public item{
protected:
    float discounted, profit;
    int dis_perc = 20;
public:
    float discount(){
        discounted=price-(price*dis_perc/100);
        profit = price*dis_perc/100;
        return discounted;
    }
    float abc(){
        return profit;
    }
    void display(){
        cout<<" Item no: "<<no;
        cout<<" Item name: "<<name;
        cout<<" Item price: "<<price;
        cout<<" Discounted price: "<<discounted<<endl;
    }
};

int main(){
    int n,j,ser;
    float sum=0,disc=0,profit=0;
    cout<<"Enter number of items: ";
    cin>>n;
    discounted_item d[100],a[100];
    for(int i=0;i<n;i++){
        d[i].init();
    }
    cout<<"Enter number of items to purchace";
    cin>>j;
    for(int i=0;i<j;i++){
        cout<<"Enter the serial number";
        cin>>ser;
        a[i] = d[ser];
        a[i].discount();
        sum += a[i].actual_price();
        disc += a[i].discount();
        profit += a[i].abc();
    }
    for(int i=0;i<j;i++){
        a[i].display();
    }
    cout<<"Total amount: "<<sum<<endl;
    cout<<"Discounted prize: "<<disc<<endl;
    cout<<"Discount: "<<profit<<endl;
    return 0;
}