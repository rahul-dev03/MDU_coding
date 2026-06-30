#include <iostream>
using namespace std;

int main(){

    int n;
    cout <<"enter : ";
    cin >> n;
    
    int i=1;
    while(i<n){
        i=i<<1;
    }
    if (i==n) cout << "power of 2";
    else cout << "not power of 2";
    
    return 0;
}