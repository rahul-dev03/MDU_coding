#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "enter :";
    cin >> n;

    for (int i=0 ; i<n ; i++){
        for (int k=0 ; k<i ; k++){
            cout << " ";
        }
        for (int j=0 ; j<n-i; j++ ){
        
        cout << (i+1) ;
        // if i add space after cout then downward triangle forms
        }cout << endl;
    }

    return 0;
}