#include <iostream>
using namespace std;

int main(){
    
    int n , k;
    cin >> n ;
    cin >> k ;
    int a;
    int count=0;
    
    int kscore;
    for(int i=1; i<=n; i++){
        
    cin >> a;
    if(i==k) kscore = a;
    
    if(i<=k){
        if(a>0) count++;
    } else {
        if(a>=kscore && a>0) count++;
      }
    } 
    cout << count;
    
    return 0;
}