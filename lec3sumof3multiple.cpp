#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "enter :";
    cin >> n;
    int sum=0;

    //for sum of first n multiples of 3
    // just do i<=3*n or or i=0 ; i<=n ; i+=3 ; sum+=i;

    // ot O(1) constant time complex...int sum= 3*n*(n+1)/2

    for (int i=1 ; i<=n ; i++){ // time complexity o(n)
        if (i%3==0){
            sum+=i;
        }
    }cout << "sum is :"<< sum;

    return 0;
}