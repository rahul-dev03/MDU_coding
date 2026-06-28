#include <iostream>
using namespace std;

int main (){

    int a=10 , b=10;
    // 4=0100 ; 8=1000;


    cout << "bitwise & = " << (a & b) << endl; // and gate a.b

    cout << "bitwise | = " << (a | b) << endl; // or gate a+b

    cout << "bitwise ^ = " << (a ^ b) << endl; // xor gate a.bnot + anot.b
    // same then 0 and diff=1

    cout << "bitwise << = " << (a<<1) << endl; // left shift operator
    // (a<<b) means a*2^b
// 4 = _ _ _ _ _ 1 0 0 then left shift by 1 
// _ _ _ _ 1 0 0 0 which is 8;

    cout << "bitwise >> = " << (b>>2) << endl; // right shift operator
    // (a>>b) means a/2^b

    return 0;
}