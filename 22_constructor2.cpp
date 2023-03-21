//
// Created by Varsha on 21-03-2023.
//
/*Define a class which contains an integer array (unsorted). Use the constructor
for initialising the array values. Include member functions to find
Range (Difference between minimum and maximum number)
Median of the numbers in the array. */

#include <iostream>
using namespace std;

class Array{
    int *arr;
    int size;
public:
    Array(int *arr,int size){
        this->arr = arr;
        this->size = size;
    }
    int range(){
        int min = arr[0],max = arr[0];
        for(int i=1;i<size;i++){
            if(arr[i]<min){
                min = arr[i];
            }
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max-min;
    }
    int median(){
        int temp;
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(arr[i]>arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        if(size%2==0){
            return (arr[size/2]+arr[size/2-1])/2;
        }
        else{
            return arr[size/2];
        }
    }
};

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    Array a(arr,10);
    cout<<"Range: "<<a.range()<<endl;
    cout<<"Median: "<<a.median()<<endl;
    return 0;
}