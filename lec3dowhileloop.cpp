#include <iostream>
using namespace std;

int main() {

    int n=10;
    int i =1;
    // do while loop me kaam pahle hota ha agar statement ya 
    // condition false bhi hoti ha to ek baar tp work karega

    do {
        cout << i << " ";
        i++;
    }while (i<=n);

    return 0;
}