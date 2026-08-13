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

int numcheck(int n){
    int y=n;
    while(y>0){
        int l=y%10;
        if(l==1 || l==0){
            y/=10;
        }else return -1;
    }return n;
}

int main(){

    int n;
    cout << "binary code : ";
    cin >> n;

    int x=numcheck(n);
    if(x==-1){
        cout << "invalid";
        return 0;
    }

    cout << "No. : " <<  binarytodec(x)<< endl;
    return 0;
}