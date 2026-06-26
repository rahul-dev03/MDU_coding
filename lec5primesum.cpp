#include <iostream>
using namespace std;

bool isprime(int n){
    if (n<=1) return false;
    for (int j=2; j*j<=n ; j++){
        if(n%j==0) return false;
    }
    return true;
}



int main(){

    int n;
    cout << "enter :";
    cin >> n;

    int sum=0;
    for (int i=2 ; i<=n ; i++){
        if (isprime(i)){
            sum+=i;
        }

    }cout << "sum :" << sum << endl;

    bool y=isprime(n);
    if (y==1){
        cout << "prime";
    }else cout <<"non prime";
    
    return 0;
}

// int sumprime(int n){

    // int sum=0;
    // for (int i=2 ; i<=n ;i++ ){
        
        // bool isprime=true;

        // for (int j=2 ; j<=i ; j++){
            // if (i%j==0){
                // isprime =false;
                // break;
            // }
        // }
        // if (isprime==true){ 
            // sum+=i;  
        // }

    // }    return sum;
// }