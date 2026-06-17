#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter ur marks :";
    cin >> n; 
    if (n>=90 ) {
        cout << "grade : A ";
    }else if (n<90 && n>=80) {
        cout << "grade : A ";
    }else if (n<80 && n>=70) {
        cout << "grade : B";
    }else if (n<70 && n>=60) {
        cout << "grade : C";
    }else if (n<60 && n>=50){
        cout << "grade : D";
    }else if (n<50 && n>=35){
        cout << "grade : E";
    }else if (n<35) {
        cout << "grade : F";
    }



    return 0;
}