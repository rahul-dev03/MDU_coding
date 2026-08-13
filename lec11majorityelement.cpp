#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums) {

    int n=nums.size();
    for(int val : nums){
        int freq =0;
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

    vector<int> nums={2,2,1,1,1,2,2};

    cout << majorityElement(nums );


    return 0;
}