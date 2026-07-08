#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec; 

    vec.push_back(1); // 1 one size array
    vec.push_back(2); // 2 times gives 1-2
    //  the vector is just array created during run time with enteries
    // for every new entery it try to accomodate it doubles the array size of vector it creates newly for entry
    // size is according to no of values given but capacity of array created is aleways 2timess

    cout << "size = " << vec.size() << endl;
    cout << "capacity of array = " << vec.capacity() << endl;

    vec.push_back(3); 1-2-3-_ the capcity is 4 becoz 2 *2 is 4

    cout << "size = " << vec.size() <<endl;
    cout << "capacity of array = " << vec.capacity() << endl;

    vec.push_back(4); this doesnt need to increase capacity
    // 1-2-3-4

    cout << "size = " << vec.size() <<endl;
    cout << "capacity of array = " << vec.capacity() << endl;
   
    return 0;
}