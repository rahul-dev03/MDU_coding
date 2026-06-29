#include <iostream>
using namespace std;

int dectobinary(int n){
    int ans=0;
    int power=1;
    while(n>0){
        int rem=n%2;
        ans+=(rem*power);
        n/=2;
        power*=10;

    }return ans;
}

int main(){

    int n;
    cout <<"enter : ";
    cin >> n;
    
    int num=dectobinary(n);
    while(num>0) { 
        if(num%10==0){
        num>>1;
    }else {
          cout << "not power of 2";
          return 0;
        }
    }
    cout << "power of 2";

    return 0;
}