#include<iostream>
#include<array>
using namespace std;


int main(){
    int arr[]={3,6,8,2,4,3,6};
    vector<int> ans;
    int n=sizeof(arr)/sizeof(arr[0]);
    array<int,7> visited;
    int val=0;
    visited.fill(val);
    for(int i=0;i<n-1;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    arr[j]=1;
                }
            }
        }
        


            ans.push_back(arr[i]) ;
    }
sort(ans.begin(),ans.end());    
for(int i=0;i<ans.size();i++){
    cout<<ans[i] ;
}

    return 0;
}