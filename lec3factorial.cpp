#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter no. :";
    cin >> n;
    int product=1;

    while(n>=1){
        product*=n;
        n-=1;
    }cout << "factorial :"<< product;

    return 0;
}