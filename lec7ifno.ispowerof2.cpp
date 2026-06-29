#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "enter no. : ";
    cin >> n;
    
    while(n>1){
        if(n%2==0){
            n/=2;
        }else {
            cout << "not power of 2";
            return 0;
        }
    }
    cout << "power of 2";
    
    return 0;
}