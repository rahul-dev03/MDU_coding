#include <iostream>
using namespace std;

int uniqueval(int arr[] , int sz){

    for(int i=0 ; i<sz ; i++){
        int num=arr[i];
        bool isunique=true;
        for(int j=0 ; j<sz  ; j++){
            if(arr[j]==num && j!=i){
                isunique=false;
                break;
            }
        }
        if(isunique==true){
            cout << num << " ";
        }

    }
}

int main(){

    int sz=6;
    cout << "size = ";
    cin >> sz;

    int arr[sz];
    cout << "array = ";


    for (int i=0 ; i<sz ; i++){
         cin >> arr[i];
    }

    cout << "unique value = ";
    uniqueval(arr , sz);
    cout << endl;
    return 0;
}