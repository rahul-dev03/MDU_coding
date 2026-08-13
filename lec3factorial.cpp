#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter no. :";
    cin >> n;
    int product=1;

    while(n>0){
        product*=n;
        n--;
    }cout << "factorial = "<< product;

    return 0;
}