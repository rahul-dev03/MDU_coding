#include <iostream>
using namespace std;

double sumoftwo(double a , double b){
    double s= a+b;
    return s;
}

int minoftwo(int a ,int b){ // a ans b are parameters .thing we remain same are known as literals
    if (a<=b){
        return a;
    }else {return b;
    }
}

int sumN(int n){
    int sum=0;
    for(int i=1 ; i<=n ; i++){
        sum+=i;
    }
return sum;
}

int factorial(int n){

    int product=1;
    for(int i=n ; i>0 ; i--){
        product*=i;
    }return product;
}

int sumplus(int a , int b){
    a=a+10;
    b=b+10;
    return a+b;
}

int main(){
    int a=5 , b=4;

    cout << sumplus(a , b)<<endl; // arguments 
    cout << a<< endl;
    cout << b << endl;
     
    return 0;
}