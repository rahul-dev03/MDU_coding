#include <iostream>
using namespace std;

int main(){

    int n; 
    cout << "nth fibbonaci : ";
    cin >> n;

    int a=0 ,b=1;

    for (int i=0 ; i<=n ; i++){

        cout << a << " ";

        int next_term =a+b;
        a=b;
        b=next_term;

    }



    return 0;
}