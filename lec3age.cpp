#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "enter ur age :";
    cin >> age;
    
    if (age>=18) {
        cout << "licence approved";
    }else cout << "licence declined ";
    
    return 0;
}