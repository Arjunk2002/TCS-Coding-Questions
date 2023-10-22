#include<iostream>
using namespace std;

int main(){
    int nums[]={1,2,3,4,5};
    int k=2;
    int n= sizeof(nums) / sizeof(nums[0]);
    int temp[n];
    int j=0;
    for(int i=k;i<n;i++){
        temp[j++]=nums[i];
    }
    for(int i=0;i<k;i++){
         temp[j++]=nums[i];
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}