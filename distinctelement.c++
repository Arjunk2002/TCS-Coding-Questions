#include<iostream>
using namespace std;


int dis(int n,int arr[]){
    int visit[n];
    int index=0;
    for(int i=0;i<n-1;i++){
        if(visit[i]==0){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visit[index];
            }
        }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    dis(n,arr);
    return 0;
}
