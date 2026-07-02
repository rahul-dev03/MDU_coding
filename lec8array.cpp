#include <iostream>
using namespace std;

int main(){

    int size=5;
    int marks[size];

    for(int i=0 ; i<size ; i++){
        cin >> marks[i];
    }
    
    for(int i=0 ; i<size ; i++){
        cout << marks[i]<< endl;
    }

    // array position starts dfrom 0;

    // cout << marks[0];
    // cout << marks[1];
    // cout << marks[2];
//    if a array is big like 100 then we dont cout every thing,

// cout << sizeof(marks) >> gives us 20 bytes which is total
// and dividing it with datatype gives us size of array
// cout << sizeof(marks)/sizeof(int);   gives us 5;

    // position goes from 0 to size-1

    return 0;
}