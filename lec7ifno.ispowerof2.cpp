#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "enter no. : ";
    cin >> n;
    
    int count=0;
    while(n>1){
        if(n%2==0){
            n/=2; //or n= n<<1 also works
            count++;
        }else {
            cout << "not power of 2";
            return 0;
        }
    }
    cout << "2^" << count;
    
    return 0;
}