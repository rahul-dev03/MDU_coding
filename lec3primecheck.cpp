#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter ur no. :";
    cin >> n;
    bool isprime=true;
    
    if (n==1){
        isprime=false;
    }else

    for (int i=2 ; i <=(n-1) ; i++){
        if (n%i==0){
            isprime=false;
            break;
        }
    }
    if (isprime==true){
        cout << "prime";
    }else cout << "non prime";

    return 0;
} 
        
