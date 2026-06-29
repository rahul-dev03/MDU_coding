#include <iostream>
using namespace std;

int main(){
    int n , k;
    cin >> n;
    cin >>k ;
    int count=0;
    int a;
    int kscore;

    for (int i=1 ; i<=n ; i++){
        cin >> a;

        if(i==k){
            kscore=a; 
        }
        if(i<=k || a<=kscore && a>0){
            count++;
        }
    }
    cout << count;

    return 0;
}