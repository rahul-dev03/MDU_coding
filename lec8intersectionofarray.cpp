#include <iostream>
using namespace std;

int intersection(int sz1 , int arr1[], int sz2 , int arr2[]){
    for(int i=0 ; i<sz1 ; i++){
       bool intsec=false;
       for(int j=0 ; j<sz2 ; j++){
        if(arr1[i]==arr2[j]){
            intsec=true;
        }
       }if (intsec==true){
        cout << arr1[i] << " ";
       }
    }
}

int main(){

    int sz1 , sz2;
    cout << "size1 = "; cin >> sz1;
    cout << "size2 = "; cin >> sz2;

    cout << "array1 = ";
    int arr1[sz1];
    for(int i=0 ; i<sz1 ; i++){
        cin >> arr1[i];
    }

    cout << "array2 = ";
    int arr2[sz2];
    for(int i=0 ; i<sz2 ; i++){
        cin >> arr2[i];
    }cout << endl;

    cout << "common value : ";
    intersection(sz1 , arr1 , sz2 , arr2);

    return 0;
}