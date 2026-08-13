#include <iostream>
using namespace std;

int main(){

    int m;
    cout << "start triangle with no. :";
    cin >> m;

    for (int i=0 ; i<m ; i++ ) {

    for (int j=0 ;j<(m-i) ; j++){
        cout << "*";
    }cout <<endl;

    }
    return 0;
}