#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter ur no :";
    cin >> n;
    // int oddsum=0;
    
    for (int i=1 ;i<=n ; i++ ){
        if (i%2!=0){
            cout << i << " ";
            // oddsum+=i;
        }
        // cout << oddsum << endl;stepwise count sum
    }
    // cout << "odd sum :" << oddsum;

    return 0;
}