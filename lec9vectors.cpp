#include <iostream>
#include <vector>
using namespace std;

int main (){

    // vector<int> vec;
    // this is vector with no sizze or no stored value
    // cout << vec[0]; this file will  not be accessible >> segmentation error

    //  vector <int> vec={1,2,3}; automatic size becomes 3 becoz vector works diff. from array 
    //  becoz array is fixed and vector can expand;
    //  cout << vec[0];
    //  this prints value in vector
     
    // vector<int> vec(3,0); // 3 is size and 0 is value assigned to all index; _0_0_0.
    // cout << vec[0] << " ";
    // cout << vec[1] << " ";
    // cout << vec[2] << " " << endl;

    // for(int i : vec){
    //     cout <<i <<endl; //here the index i is stored value on the index or say for(int val : vec)
    // }

    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    cout << "intial size = " << vec.size() << endl ;

    vec.pop_back();
    cout << "final size = " << vec.size() << endl;

    cout << vec.front() << ' ';
    cout << vec.at(1) << " ";
    cout << vec.back();
    for (int value : vec){
        cout << value << endl;
    }

    return 0; 
}
// static allocation is of two types : stack & heap;
// static allocation >> compile timne >> like array[size is fixed during complilation]