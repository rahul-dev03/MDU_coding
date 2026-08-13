#include <iostream>
using namespace std;

void reversearr(int arr[] , int sz){
    int start=0;
    int end =(sz-1);
    while(start< end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    int sz; cout << "size = "; cin >> sz;
    int arr[sz];
    cout << "array = "; 
    for(int i=0 ; i<sz ; i++){
        cin >> arr[i];
    }

    reversearr( arr , sz);

    cout << "reversed arr = ";
    for(int i=0 ; i<sz ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}