#include<iostream>
using namespace std;

int main(){
    int arr[6]={4,7,2,7,4,1};
    int n=6;
    int arr1[6]={0,0,0,0,0,0};
    for(int i=0;i<n-1;i++){
        if(arr1[i]==1){
            continue;
        }
        int cnt=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
                arr1[j]=1;
            }

        }
        cout<<arr[i]<<"-"<<cnt<<endl;
        cnt=0;
    }
    return 0;
}