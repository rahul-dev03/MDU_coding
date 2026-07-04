#include <iostream>
using namespace std;

int main(){

    int sz;
    cout << "enter size = " ; cin >> sz;
    int arr[sz];

    cout << "array = ";

    for(int i=0 ; i<sz ; i++){
        cin >> arr[i];
    }

    int sum=0;
    int product=1;
    for(int i=0 ; i<sz ; i++){
        sum+=arr[i];
        product*=arr[i];
    }

    cout << "sum = " << sum <<endl;
    cout << "product = " << product << endl;
    
    return 0;
}