#include <iostream>
using namespace std;

//  int multiplier(int n){
//     int power=1;
//      while(n>9){
//         n/=10;
//         power*=10;
//     }return power;
// } good but not omptimised

int reverse(int n){

    int ans=0;
    int power=10;
    while(n>0){
        int rem=n%10;
        n/=10;
        ans=(ans*power)+rem;
    }return ans;
}

int main(){

    int n; 
    cout << "enter : ";
    cin >> n;

    cout << "reversed no. : " << reverse( n);
   
    return 0;
}