#include <iostream>
using namespace std;

int binarytodec(int n){

    int num=0;
    int power=1;
    while(n>0){

        int last_digit=n%10;

        num+=(last_digit*power);
        n/=10;
        power*=2;

    }return num;
}

int main(){

    int n;
    cout << "binary code : ";
    cin >> n;

    cout << "No. : " <<  binarytodec(n)<< endl;
    return 0;
}