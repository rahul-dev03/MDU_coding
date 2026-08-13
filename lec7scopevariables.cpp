#include <iostream>
using namespace std;

int x=10; // access globally it doesnt diappear info like loop nest functionetc

void fun(){

    x=50; // local shodowing
    cout << x << endl; // prints 50 ;got shadowed by local
    cout << : : x ; // prints global value
}

int main() {
    fun();
    cout << x;

    return 0;
}

int x = 10; // Global

void fun() {
    int x = 50; // Local "shadows" global x
    cout << x << endl; // Prints 50, NOT 10!
}

// ❌ WRONG (Same scope):
int a = 5;
int a = 10; // Compiler Error!

// ✅ VALID (Nested blocks):
int a = 5;
{
    int a = 10; // Perfectly valid! Inner 'a' shadows outer 'a'
    cout << a;  // Prints 10
}
cout << a;      // Prints 5