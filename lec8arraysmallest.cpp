#include <iostream>
#include <bits/stdc++.h> // for infinty library
using namespace std;

int main(){

    int num[]= {5 , 15 ,22 , 1 ,-15 ,24};
    int size=6;

    int smallest = INT_MAX; // +infinity
    int sindex =0;
    int largest = INT_MIN; // -infinity
    int lindex=0;
    for (int i=0 ; i<size ;  i++){
        if(num[i]<smallest){
            smallest = num[i];
            sindex=i;
        }
        if(num[i]>largest){
            largest=num[i];
            lindex=i;
        }
    }

    cout << "smallest = " << smallest << " at i = "<< sindex << endl;
    cout << "largest = " << largest << " at i = " << lindex <<endl;

    return 0;
}