#include <iostream>
using namespace std;

int x=10; // access globally it doesnt diappear info like loop nest functionetc

void fun(){

    cout << x << endl;
}

int main() {
    fun();
    cout << x;

    return 0;
}