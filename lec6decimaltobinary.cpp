#include <iostream>
using namespace std;

int dectobinary(int n){
    int ans=0 , power=1;
    while(n>0){
        int rem=n%2;
        n/=2;

        ans+=(rem*power);
        power*=10;
    }
    return ans;
}

int main (){

    int n;
    cout << "enter : ";
    cin >> n;

    cout << "No ." << "   "<< "binary code " <<endl;
     for(int i=0 ; i<=n ; i++){
        cout << i<< "      ";
        cout << dectobinary(i)<< endl;
    }

    return 0;
}