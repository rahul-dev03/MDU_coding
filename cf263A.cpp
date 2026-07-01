#include <iostream>
using namespace std;

int main(){

    int n;
    int moves=0;

    for(int i=1 ; i<=5 ; i++){

        for(int j=1 ; j<=5 ; j++){
            cin >> n;
            if (n==1){
               moves=abs(3-i)+abs(3-j);

            }
        }
    }
    cout << moves;

    return 0;
}