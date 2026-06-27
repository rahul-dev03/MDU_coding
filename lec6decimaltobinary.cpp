#include <iostream>
using namespace std;

int dectobinary(int i){
    int ans=0 , power=1;
    while(i>0){
        int rem=i%2;
        i/=2;

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