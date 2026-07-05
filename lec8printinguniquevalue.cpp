#include <iostream>
using namespace std;

int uniqueval(int arr[] ; int sz){

    int unique;
    for (int i=0 ; i<sz ; i++){
       int  num=arr[i];
       for(int j=1 ; j<sz ; j++){
        if(arr[i]==num);
        break;
       }else unique=num;
    }return unique;
}

int main(){

    int sz;
    cout << "size = ";
    cin >> sz;

    int arr[sz];
    cout << "array = ";

    for (int i=0 ; i<sz ; i++){
        cin >> arr[i];
    }

    cout << "unique no. : " << uniqueval(arr , sz) << " ";
    return 0;
}