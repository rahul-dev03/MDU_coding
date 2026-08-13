#include <iostream>
using namespace std;

int digitsum(int num){
    int digitsum=0;
    while (num>0){
        int lastdig =num%10;
        num/=10;
        digitsum+=lastdig;
    }return digitsum;
}

int main(){

    int n; cout << "No. : "; cin >> n;
    cout << digitsum(n);
    return 0;
}
