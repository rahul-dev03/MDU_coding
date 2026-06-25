#include <iostream>
using namespace std;

int sumprime(int n){

    int sum=0;
    for (int i=2 ; i<=n ;i++ ){
        
        bool isprime=true;

        for (int j=2 ; j<=i-1 ; j++){
            if (i%j==0){
                isprime =false;
                break;
            }
        }
        if (isprime==true){ 
            sum+=i;  
        }

    }    return sum;
}

int main(){

    int n;
    cout << "enter :";
    cin >> n;

    cout << sumprime(n);

    return 0;
}
