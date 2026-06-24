#include <iostream>
using namespace std;

int digitsum(int num){
    int digitsum=0;
    while (num>0){
        int lastdig =num%10;
        num/=10;
        digitsum+=lastdig;
    }return digitsum;
}

int main(){

   cout << digitsum(203);
    return 0;
}
