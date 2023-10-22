#include<iostream>
#include<vector>
using namespace std;

void findNonRepeatingElement(vector<int>& nums) {
    for(int i=0;i<nums.size()-1;i++){
        bool chk=false;
        for(int j=i+1;j<nums.size();j++){
        if(nums[i]==nums[j]){
            chk=true;
            break;
        }
        }
        if(chk==false){
            cout<< nums[i] <<" ";
        }
    }
    
}

int main() {
    vector<int> nums ;
    nums.push_back(1);
nums.push_back(2);
nums.push_back(-1);
nums.push_back(1);
nums.push_back(3);
nums.push_back(1);
    cout<<"Non-repeating numbers are: "<<endl;
    findNonRepeatingElement(nums);
    
    return 0;
}