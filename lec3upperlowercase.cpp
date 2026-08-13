#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "enter your character :";
    cin >> ch;
    if (ch>='a' && ch<='z'){
        cout << "lowercase";
    }else if(ch>='A' && ch<='Z'){
        cout << "UPPERCASE";
    }



    return 0;
}