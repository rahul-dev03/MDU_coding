#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int swapminmax(int arr[] , int sz){

    int smallest = INT_MAX;
    int sindex=0;
    int largest = INT_MIN;
    int lindex=0; 
    for (int i=0 ; i<sz ; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            sindex=i;

        }
        if(arr[i]>largest){
            largest= arr[i];
            lindex=i;
        }
    }
    swap(arr[sindex], arr[lindex]);
}

int main (){

    int sz;
    cout << "size = ";
    cin >> sz;

    int arr[sz];
    cout << "array = ";

    for (int i=0 ; i<sz ; i++){
        cin >> arr[i];
    }

    swapminmax(arr , sz);

    cout << "swapped array = ";
    for (int i=0 ; i<sz ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}