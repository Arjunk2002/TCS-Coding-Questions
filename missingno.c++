#include<iostream>
using namespace std;

int missingNumber(int nums[],int n) {
        int flag=0;
        for(int i=0;i<=n-1;i++){
            for(int j=i;j<n-1;j++){
               if(nums[j]==i){
                     flag=1;
               }
            }
            if(flag==0){
                return i;
            }
        }
    }


int main() {
	// Write your code here
	 int arr1[]={5,3,0,1,2};
     int a=missingNumber(arr1,5);
     cout<< a  <<endl;
	

}
