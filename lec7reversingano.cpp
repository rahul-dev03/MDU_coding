#include <iostream>
#include <vector>
using namespace std;

int reverse(int n){

    int ans=0;
    int power=10;
    while(n>0){
        int rem=n%10;
        n/=10;
        ans=(ans*power)+rem;
    }
    return ans;
}

void rev1(int n){
    vector<int> vec;

    while(n>0){
        int rem=n%10;
        n/=10;
        vec.push_back(rem);
    }
    for(int i : vec){
        cout << i;
    }cout <<endl;
}

int main(){

    int n; 
    cout << "enter : ";
    cin >> n;

    cout << "reversed no. : " << reverse(n);
   
    return 0;
}