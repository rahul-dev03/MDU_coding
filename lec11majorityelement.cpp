#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums) {

    int feq=0, n=nums.size();
    for(int val : nums){
        for(int el : nums){
            if(el==val){
                feq++;
            }
        }if(feq>(n/2)){
        return feq;
    }
        
    }
}


int main(){

    vector<int> nums={1,1,2,2,1};

    cout << majorityElement(nums );


    return 0;
}