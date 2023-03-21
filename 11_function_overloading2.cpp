//
// Created by Varsha on 21-03-2023.
//
/*Write three versions of overloaded function sum().
When it takes an integer array as argument, returns the sum of all elements of
the array. When it takes array and a character, returns the sum of even
elements if char='E', returns the sum of odd elements if char='O'.
When it takes array and two integers, it will swap the positions indicated by
the integers. */

#include <iostream>
using namespace std;

int array(int a[], int n){
    int sum=0,i;
    for(i=0;i<n;i++){
        sum += a[i];
    }
    return sum;
}

int array(int a[], char c, int n){
    int sum=0,i;
    if(c=='E'){
        for(i=0;i<n;i++){
            if(a[i]%2==0){
                sum += a[i];
            }
        }
    }
    if(c=='O'){
        for(i=0;i<n;i++){
            if(a[i]%2!=0){
                sum += a[i];
            }
        }
    }

    return sum;
}

void array(int a[],int x,int y, int n){
    int temp;
    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
    cout<<"\nSwapped array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}

int main(){
    int a[100],n,i,x,y;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Sum: "<<array(a,n)<<endl;
    cout<<"Sum of even numbers: "<<array(a,'E',n)<<endl;
    cout<<"Sum of odd numbers: "<<array(a, 'O',n)<<endl;
    cout<<"Enter the positions to swap: ";
    cin>>x>>y;
    array(a,x,y,n);
    return 0;
}


