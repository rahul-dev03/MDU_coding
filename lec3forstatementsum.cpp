#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter no. :";
    cin >> n;
    int sum=0;

    for (int i=1 ; i<=n ; i++) {
        // u can change condittions for ven or odd by adjusting
        // i and i+= value
        sum+=i;
        // cout << sum << endl; it is for sum at every step if in bracket
    }cout << sum;

    // i=0 then i+=2 for even sum and i=1 and i+=2 fpr odd 

    return 0;
}